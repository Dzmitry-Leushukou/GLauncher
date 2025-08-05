#ifndef FILESERVICE_H
#define FILESERVICE_H
#include <string>
#include <QString>
#include <vector>
#include <fstream>

class FileService {
    public:
    static std::vector<std::string> readFile(const std::string& filePath);
    static void addLineToFile(const QString& line,const std::string& filePath);
};



#endif //FILESERVICE_H
