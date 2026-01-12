
#pragma once
#include <QString>
#include <QVector>

struct RCResourcePack {
    QString id;
    int priority;
    bool providesFonts = false;
};

struct RCManifest {
    QString project;
    QString minecraftVersion;
    QVector<RCResourcePack> packs;
};
