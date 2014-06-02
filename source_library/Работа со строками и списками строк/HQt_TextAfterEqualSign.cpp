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
    QString VMHL_Result;

    VMHL_Result=String.mid(String.indexOf("=")+1);

    VMHL_Result=VMHL_Result.trimmed();

    return VMHL_Result;
}