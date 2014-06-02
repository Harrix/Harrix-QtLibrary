double HQt_QStringToNumber (QString x)
{
    /*
    Функция выводит строку x в число.
    Входные параметры:
     x - строка.
    Возвращаемое значение:
     Число из строки.
    */
    double VMHL_Result;

    VMHL_Result=x.toDouble();

    return VMHL_Result;
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
    double VMHL_Result;

    if (checkcomma) x=x.replace(",",".");

    VMHL_Result=x.toDouble();

    return VMHL_Result;
}