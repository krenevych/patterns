//
// Created by a.krenevych on 04.11.2022.
//

#include "Logger.h"

using namespace std;

Logger* Logger::instance;

Logger &Logger::getInstance() {
    if (instance == nullptr){
        instance = new Logger();
    }
    return *instance;
}

void Logger::log(const string &tag, const string &message) {
    fprintf(mStream, "[%s]: %s\n", tag.c_str(), message.c_str());
    fflush(mStream);
}

Logger::Logger() {
    mStream = fopen("log.txt", "w");

    atexit([](){
        delete instance;
    });
}

Logger::~Logger() {
    fclose(mStream);
}
