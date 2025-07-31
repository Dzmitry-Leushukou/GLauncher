#include "UI/ui.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication application(argc,argv);
    std::unique_ptr<UI> ui(new UI());
    ui->show();
    return application.exec();
}