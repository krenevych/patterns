#include <iostream>
using namespace std;

class Logger {
public:

    static Logger& getInstance(){
        if (instance == nullptr){
            instance = new Logger();
        }
        return *instance;
    }

    void log(const string& tag, const string& message){
        fprintf(mStream, "[%s]: %s\n", tag.c_str(), message.c_str());
        fflush(mStream);
//        cout << message << "\n";
    }

    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;

private:

    Logger() {
//        cout << "Created instance\n";
        mStream = fopen("log.txt", "w");

        atexit([](){
            delete instance;
        });
    }

    virtual ~Logger() {
//        cout << "Destroed\n";
        fclose(mStream);
    }

    static Logger* instance;

    FILE *mStream;
};

Logger* Logger::instance;

int main() {
//    std::cout << "Hello, World!" << std::endl;

    Logger::getInstance().log("Singleton", "Hello");
    Logger::getInstance().log("Singleton", "World");
    Logger::getInstance().log("Singleton", "!");

    return 0;
}
