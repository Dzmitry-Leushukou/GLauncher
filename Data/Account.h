//
// Created by Lenovo on 02.08.25.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>
#include <QVector>
#include "../Services/Decipherer.h"

class Account
{
  public:
  void setName(const QString& name);
  void setId(const QString& id);
  void setGames(const QVector<QPair<QString,QString>>& games);
  QString getName() const;
  QString getId() const;
  QVector<QPair<QString,QString>> getGames() const;

  private:
  QString name;
  QString id;
  QVector<QPair<QString,QString>> games;
};



#endif //ACCOUNT_H
