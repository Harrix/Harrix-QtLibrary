void HQt_DirMake(QString path)
{
    /*
    Функция проверяет существование директории, и если ее нет, то создает.
    Входные параметры:
     path - полный путь к папке.
    Возвращаемое значение:
     Отсутствует.
    */
    path = QDir::toNativeSeparators(path);
    QString Separator="\\";

    QString Sub;
    QString Subpath;

    while(path.indexOf(Separator)>0)
    {
    Sub=path.mid(0,path.indexOf(Separator)+1);
    path=path.mid(path.indexOf(Separator)+1);

    Subpath+=Sub;
    QDir dir(Subpath);
    if(!dir.exists()) dir.mkdir(Subpath);
    }

    Subpath+=path;
    QDir dir(Subpath);
    if(!dir.exists()) dir.mkdir(Subpath);
}