
#include <Logger.h>

int main() {
    Logger::getInstance().log("Singleton", "Hello");
    Logger::getInstance().log("Singleton", "World");
    Logger::getInstance().log("Singleton", "!");

    return 0;
}
