//
// Created by Lenovo on 01.08.25.
//

#ifndef UI_H
#define UI_H

#include <QMainWindow>
#include "../Application/Application.h"

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
};


#endif //UI_H
