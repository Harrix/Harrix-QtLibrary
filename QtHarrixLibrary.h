#ifndef QTHARRIXLIBRARY_H
#define QTHARRIXLIBRARY_H

#include <QDebug>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
#include <QDir>

QString HQt_ReadFile(QString filename);
void HQt_SaveFile(QString line, QString filename);
QString HQt_ListFilesInDir(QString path);
QString HQt_ListDirsInDir(QString path);
QString HQt_GetExpFromFilename(QString filename);

#endif // QTHARRIXLIBRARY_H
