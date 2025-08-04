//
// Created by Lenovo on 05.08.25.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include "FileService.h"

class Logger {
    public:
    static void init(const std::string& filepath);
    static void addLog(const std::string& log);
    private:
    static std::string path;
};



#endif //LOGGER_H
