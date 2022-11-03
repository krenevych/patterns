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

    void log(const string& message){
        cout << message << "\n";
    }

    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;

private:

    Logger() {
        cout << "Created instance\n";
    }

    virtual ~Logger() {
        cout << "Destroed\n";
    }

    static Logger* instance;
};

Logger* Logger::instance;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Logger::getInstance().log("Hello");

    return 0;
}
