/*
    SPDX-FileCopyrightText: 2004 Waldo Bastian <bastian@kde.org>

    SPDX-License-Identifier: MIT
*/

#include "test7.h"
#include <QGuiApplication>

int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    Test7 t = Test7(42);
    return 0;
}
