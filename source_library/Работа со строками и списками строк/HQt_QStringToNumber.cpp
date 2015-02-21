double HQt_QStringToNumber (QString x)
{
    /*
    Функция выводит строку x в число.
    Входные параметры:
     x - строка.
    Возвращаемое значение:
     Число из строки.
    */
    double VHQt_Result;

    VHQt_Result=x.toDouble();

    return VHQt_Result;
}
//---------------------------------------------------------------------------
double HQt_QStringToNumber (QString x, bool checkcomma)
{
    /*
    Функция выводит строку x в число.
    Входные параметры:
     x - строка;
     checkcomma - проверять наличие запятой.
    Возвращаемое значение:
     Число из строки.
    */
    double VHQt_Result;

    if (checkcomma) x=x.replace(",",".");

    VHQt_Result=x.toDouble();

    return VHQt_Result;
}