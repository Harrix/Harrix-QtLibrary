QString HQt_GetFilenameFromFullFilename(QString filename)
{
    /*
    Функция получает имя файла по полному пути.
    Входные параметры:
     filename - имя файла с путем.
    Возвращаемое значение:
     Строка с именем файла.
    */
    filename = QDir::toNativeSeparators(filename);
    QString name;

    QString Separator="\\";

    name=filename.mid(filename.lastIndexOf(Separator)+1);
    return name;
}