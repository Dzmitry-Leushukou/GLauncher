//
// Created by Lenovo on 02.08.25.
//

#include "Decipherer.h"

QString Decipherer::StatusIdToWord(const QString& status)
{
    if (status == "1")
        return"alpha tester";
    if (status == "2")
        return"beta tester";
    if (status == "3")
        return"moderator";
    if (status == "4")
        return"admin";
    if (status == "5")
        return"dev";
    return "player";
}