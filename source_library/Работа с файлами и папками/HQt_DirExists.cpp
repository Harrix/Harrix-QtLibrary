bool HQt_DirExists(QString path)
{
    /*
    Функция проверяет существование директории.
    Входные параметры:
     path - полный путь к папке.
    Возвращаемое значение:
     false - если папка не существует,
     true - если папка существует.
    */
    path = QDir::toNativeSeparators(path);
    QDir dir(path);
    if(dir.exists())
       return true;
    else
      return false;
}