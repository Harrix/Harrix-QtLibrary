int HQt_SearchQStringInQStringList (QStringList StringList, QString String)
{
    /*
    Функция ищет в QStringList строку QString (номер первого вхождения).
    Входные параметры:
     StringList - QStringList, в который мы ищем строку;
     String - добавляемая строка.
    Возвращаемое значение:
     Номер найденной строки. Если не найдено, то возвращается -1.
    */
    int VMHL_Result = -1;
    bool in=false;
    int i=0;

    while ((i<StringList.count())&&(in!=true))
    {
        if (StringList.at(i)==String)
            VMHL_Result=i;
        i++;
    }

    return VMHL_Result;
}