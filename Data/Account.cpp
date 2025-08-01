//
// Created by Lenovo on 02.08.25.
//

#include "Account.h"


void Account::setName(const QString& name){
    this->name = name;
}
void Account::setId(const QString& id) {
    this->id = id;
}
void Account::setGames(const QVector<QPair<QString,QString>>& games)
{
    this->games.clear();
    for (auto& game : games)
    {
        QString status = Decipherer::StatusIdToWord(game.second);
        this->games.append({game.first, status});
    }
}
QString Account::getName() const {
    return this->name;
}
QString Account::getId() const {
    return this->id;
}
QVector<QPair<QString,QString>> Account::getGames() const {
    return this->games;
}