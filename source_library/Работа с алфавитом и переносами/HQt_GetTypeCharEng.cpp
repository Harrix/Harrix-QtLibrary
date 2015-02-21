int HQt_GetTypeCharEng(QString x)
{
    /*
    Функция выдает тип вводимого QString (считая, что это буква английская). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.
    Входные параметры:
     x - некая буква.
    Возвращаемое значение:
     1 - гласная;
     2 - согласная;
     0 - иначе.
    */
    int VHQt_Result=0;

    if (x=="A") VHQt_Result=1;
    if (x=="a") VHQt_Result=1;

    if (x=="B") VHQt_Result=2;
    if (x=="b") VHQt_Result=2;
    if (x=="C") VHQt_Result=2;
    if (x=="c") VHQt_Result=2;
    if (x=="D") VHQt_Result=2;
    if (x=="d") VHQt_Result=2;

    if (x=="E") VHQt_Result=1;
    if (x=="e") VHQt_Result=1;

    if (x=="F") VHQt_Result=2;
    if (x=="f") VHQt_Result=2;
    if (x=="G") VHQt_Result=2;
    if (x=="g") VHQt_Result=2;
    if (x=="H") VHQt_Result=2;
    if (x=="h") VHQt_Result=2;

    if (x=="I") VHQt_Result=1;
    if (x=="i") VHQt_Result=1;

    if (x=="J") VHQt_Result=2;
    if (x=="j") VHQt_Result=2;
    if (x=="K") VHQt_Result=2;
    if (x=="k") VHQt_Result=2;
    if (x=="L") VHQt_Result=2;
    if (x=="l") VHQt_Result=2;
    if (x=="M") VHQt_Result=2;
    if (x=="m") VHQt_Result=2;
    if (x=="N") VHQt_Result=2;
    if (x=="n") VHQt_Result=2;

    if (x=="O") VHQt_Result=1;
    if (x=="o") VHQt_Result=1;

    if (x=="P") VHQt_Result=2;
    if (x=="p") VHQt_Result=2;
    if (x=="Q") VHQt_Result=2;
    if (x=="q") VHQt_Result=2;
    if (x=="R") VHQt_Result=2;
    if (x=="r") VHQt_Result=2;
    if (x=="S") VHQt_Result=2;
    if (x=="s") VHQt_Result=2;
    if (x=="T") VHQt_Result=2;
    if (x=="t") VHQt_Result=2;

    if (x=="U") VHQt_Result=1;
    if (x=="u") VHQt_Result=1;

    if (x=="V") VHQt_Result=2;
    if (x=="v") VHQt_Result=2;
    if (x=="W") VHQt_Result=2;
    if (x=="w") VHQt_Result=2;
    if (x=="X") VHQt_Result=2;
    if (x=="x") VHQt_Result=2;

    if (x=="Y") VHQt_Result=1;
    if (x=="y") VHQt_Result=1;

    if (x=="Z") VHQt_Result=2;
    if (x=="z") VHQt_Result=2;

    return VHQt_Result;
}