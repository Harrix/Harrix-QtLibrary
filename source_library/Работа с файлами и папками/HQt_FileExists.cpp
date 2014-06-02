bool HQt_FileExists(QString filename)
{
    /*
    Функция проверяет существование файла.
    Входные параметры:
     filename - имя файла.
    Возвращаемое значение:
     false - если файл не существует,
     true - если файл существует.
    */
    filename = QDir::toNativeSeparators(filename);
    QFile file(filename);
    if(!file.exists()){
        file.close();
        return false;
    }else{
        file.close();
        return true;
    }
}