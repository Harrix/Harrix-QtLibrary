QStringList HQt_AddUniqueQStringInQStringList (QStringList StringList, QString String)
{
    /*
    Функция добавляет в QStringList строку QString. Но если такая строка уже присутствует, то добавление не происходит.
    Входные параметры:
     StringList - QStringList, в который мы добавляем строку (добавление в возвращаемом элементе);
     String - добавляемая строка.
    Возвращаемое значение:
     Список строк с добавленной строкой.
    */
    bool in=false;

    QStringList GG = StringList;

    for (int i=0;i<GG.count();i++)
    {
        if (GG.at(i)==String)
            in=true;
    }

    if (!in) GG << String;

    return GG;
}