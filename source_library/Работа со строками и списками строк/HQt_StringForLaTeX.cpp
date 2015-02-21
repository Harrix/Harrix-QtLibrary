QString HQt_StringForLaTeX (QString String)
{
    /*
    Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX.
    Входные параметры:
     String - обрабатываемая строка.
    Возвращаемое значение:
     Обработанная строка.
    */
    QString VHQt_Result;

    VHQt_Result=String.replace("_","\\_").replace("#","\\#").replace("~", "$\\sim$");

    return VHQt_Result;
}