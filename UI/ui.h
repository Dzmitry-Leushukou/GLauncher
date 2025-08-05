#ifndef UI_H
#define UI_H

#include <QMainWindow>
#include "../Application/Application.h"
#include <QMessageBox>
#include <QTabWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class UI; }
QT_END_NAMESPACE

class UI : public QMainWindow {
Q_OBJECT

public:
    explicit UI(QWidget *parent = nullptr);
    ~UI() override;



private:
    Ui::UI *ui;
    Application *app=nullptr;

    void connectSlots();

private slots:
    void onTabChanged(int index);
};


#endif //UI_H
