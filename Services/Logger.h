#ifndef LOGGER_H
#define LOGGER_H
#include <QString>
#include <string>
#include "FileService.h"

class Logger {
    public:
    static void init(const std::string& filepath);
    static void addLog(const QString& log);
    private:
    static std::string path;
};



#endif //LOGGER_H
