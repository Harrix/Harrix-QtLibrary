bool HQt_IsNumeric(QString x)
{
    /*
    Функция проверяет - является ли строка числом.
    Входные параметры:
     x - проверяемая строка.
    Возвращаемое значение:
     true - является числом;
     false - не является числом.
    */
    bool VMHL_Result;

    x=x.replace(",",".");

    x.toDouble(&VMHL_Result);

    return VMHL_Result;
}