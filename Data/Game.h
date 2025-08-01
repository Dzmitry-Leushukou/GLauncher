//
// Created by Lenovo on 02.08.25.
//

#ifndef GAME_H
#define GAME_H
#include <QString>


class Game
{
public:
    QString getName() const {
        return name;
    }

    QString getId() const {
        return id;
    }

    QString getImage() const {
        return image;
    }

    QString getShortImage() const {
        return short_image;
    }

    QString getDescription() const {
        return description;
    }

private:
    QString name;
    QString id;
    QString image;
    QString short_image;
    QString description;
};



#endif //GAME_H
