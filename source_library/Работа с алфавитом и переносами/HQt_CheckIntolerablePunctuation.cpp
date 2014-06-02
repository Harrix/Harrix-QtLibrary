bool HQt_CheckIntolerablePunctuation(QString x)
{
    /*
    Является ли символом знаком пунктуации, который нельзя переносить.
    Входные параметры:
     x - некий символ.
    Возвращаемое значение:
     true - символ есть непереносимый символ;
     false - не из слова.
    */
    bool VMHL_Result=false;

    if (x==".") VMHL_Result=true;
    if (x==",") VMHL_Result=true;
    if (x==":") VMHL_Result=true;
    if (x=="!") VMHL_Result=true;
    if (x=="?") VMHL_Result=true;

    return VMHL_Result;
}