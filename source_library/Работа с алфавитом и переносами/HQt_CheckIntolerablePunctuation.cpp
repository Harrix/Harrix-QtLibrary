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
    bool VHQt_Result=false;

    if (x==".") VHQt_Result=true;
    if (x==",") VHQt_Result=true;
    if (x==":") VHQt_Result=true;
    if (x=="!") VHQt_Result=true;
    if (x=="?") VHQt_Result=true;

    return VHQt_Result;
}