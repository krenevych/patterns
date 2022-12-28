//
// Created by a.krenevych on 04.11.2022.
//

#ifndef SINGLETON_LOGGER_H
#define SINGLETON_LOGGER_H

#include <istream>

class Logger {
public:

    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;

    static Logger& getInstance();

    void log(const std::string& tag, const std::string& message);

private:

    Logger();
    virtual ~Logger();

    static Logger* instance;
    FILE *mStream;
};

#endif //SINGLETON_LOGGER_H
