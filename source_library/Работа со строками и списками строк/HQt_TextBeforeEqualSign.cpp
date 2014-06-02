QString HQt_TextBeforeEqualSign (QString String)
{
    /*
    Функция возвращает текст строки до первого знака =.
    Входные параметры:
     String - строка вида:
     Title = Пример
    Возвращаемое значение:
     Текст строки до первого знака =.
    */
    QString VMHL_Result;

    VMHL_Result=String.mid(0,String.indexOf("="));

    VMHL_Result=VMHL_Result.trimmed();

    return VMHL_Result;
}