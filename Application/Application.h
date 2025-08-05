#ifndef APPLICATION_H
#define APPLICATION_H

#include "../Services/Logger.h"
#include "../Services/DBService.h"

class Application
{
    public:
    explicit Application(const int& tabId);
    static void initComponents();
    void changeTab(const int& newTabId);
    private:
    int choosedTab;

};



#endif //APPLICATION_H
