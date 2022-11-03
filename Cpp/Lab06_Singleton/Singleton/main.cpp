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

    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;

private:

    Logger() {
        cout << "Created instance\n";
    }

    virtual ~Logger() {
        cout << "Destroed\n";
    }

    static Logger *instance;
};

int main() {
    std::cout << "Hello, World!" << std::endl;

//    Logger& logger =
            Logger::getInstance();

    return 0;
}
