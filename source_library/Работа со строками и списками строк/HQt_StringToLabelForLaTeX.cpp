QString HQt_StringToLabelForLaTeX (QString String)
{
    /*
    Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX в виде label.
    Входные параметры:
     String - обрабатываемая строка.
    Возвращаемое значение:
     Обработанная строка.
    */
    QString VHQt_Result;

    VHQt_Result=String.replace("_","").replace("#","\\#");

    return VHQt_Result;
}