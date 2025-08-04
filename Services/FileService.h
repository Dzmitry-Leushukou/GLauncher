//
// Created by Lenovo on 05.08.25.
//

#ifndef FILESERVICE_H
#define FILESERVICE_H
#include <string>
#include <vector>
#include <fstream>

class FileService {
    public:
    static std::vector<std::string> readFile(const std::string& filePath);
    static void addLineToFile(const std::string& line,const std::string& filePath);
};



#endif //FILESERVICE_H
