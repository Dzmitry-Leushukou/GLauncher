//
// Created by Lenovo on 05.08.25.
//

#ifndef DBSERVICE_H
#define DBSERVICE_H

#include <string>

class DBService {
public:
    static void init(std::string api);
    static std::string getApiKey();
private:
    static std::string api_key;
};



#endif //DBSERVICE_H
