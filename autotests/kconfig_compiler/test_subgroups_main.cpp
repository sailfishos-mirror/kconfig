/*
    This file is part of KDE.

    Copyright (C) 2020 Cyril Rossi <cyril.rossi@enioka.com>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "test_subgroups.h"
#include <QGuiApplication>

int main(int argc, char **argv)
{
    QStandardPaths::setTestModeEnabled(true);
    QGuiApplication app(argc, argv);
    Q_UNUSED(app);
    TestSubgroups t = TestSubgroups(QStringLiteral("General"), QStringLiteral("Sub"), QStringLiteral("AnotherSub"));
    return 0;
}
