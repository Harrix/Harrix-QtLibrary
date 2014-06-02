bool HQt_RenameFile(QString filename, QString newfilename)
{
    /*
    Функция переименовывает файл filename в newfilename.
    Входные параметры:
     filename - имя файла (с полным путем),
     newfilename - новое имя файла (без полного пути).
    Возвращаемое значение:
     true - если переименовалось удачно,
     false - если переименовалось неудачно.
    */
    filename = QDir::toNativeSeparators(filename);
    newfilename = QDir::toNativeSeparators(newfilename);
    QString Separator="\\";

    QString refilename = filename.mid(0,filename.lastIndexOf(Separator)+1) + newfilename;

    bool result = QFile::rename(filename,refilename);
    return result;
}