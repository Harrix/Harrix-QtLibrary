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
    QString VHQt_Result;

    VHQt_Result=String.mid(0,String.indexOf("="));

    VHQt_Result=VHQt_Result.trimmed();

    return VHQt_Result;
}