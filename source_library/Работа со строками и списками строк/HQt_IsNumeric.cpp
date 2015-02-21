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
    bool VHQt_Result;

    x=x.replace(",",".");

    x.toDouble(&VHQt_Result);

    return VHQt_Result;
}