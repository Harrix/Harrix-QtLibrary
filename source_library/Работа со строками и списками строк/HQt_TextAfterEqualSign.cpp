QString HQt_TextAfterEqualSign (QString String)
{
    /*
    Функция возвращает текст строки после первого знака =.
    Входные параметры:
     String - строка вида:
     Title = Пример
    Возвращаемое значение:
     Текст строки после первого знака =.
    */
    QString VHQt_Result;

    VHQt_Result=String.mid(String.indexOf("=")+1);

    VHQt_Result=VHQt_Result.trimmed();

    return VHQt_Result;
}