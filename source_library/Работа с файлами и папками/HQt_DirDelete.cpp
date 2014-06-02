bool HQt_DirDelete(QString path)
{
    /*
    Функция удаляет директорию и всё ее содержимое.
    Входные параметры:
     path - полный путь к папке.
    Возвращаемое значение:
     true - если удаление прошло нормально.
     false -  если удаление прошло не нормально.
    */
    bool result = true;
    QDir dir(path);

    if (dir.exists(path)) {
        Q_FOREACH(QFileInfo info, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst)) {
            if (info.isDir()) {
                result = HQt_DirDelete(info.absoluteFilePath());
            }
            else {
                result = QFile::remove(info.absoluteFilePath());
            }

            if (!result) {
                return result;
            }
        }
        result = dir.rmdir(path);
    }
    return result;
}