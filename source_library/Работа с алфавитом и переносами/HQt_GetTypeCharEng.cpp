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
    int VMHL_Result=0;

    if (x=="A") VMHL_Result=1;
    if (x=="a") VMHL_Result=1;

    if (x=="B") VMHL_Result=2;
    if (x=="b") VMHL_Result=2;
    if (x=="C") VMHL_Result=2;
    if (x=="c") VMHL_Result=2;
    if (x=="D") VMHL_Result=2;
    if (x=="d") VMHL_Result=2;

    if (x=="E") VMHL_Result=1;
    if (x=="e") VMHL_Result=1;

    if (x=="F") VMHL_Result=2;
    if (x=="f") VMHL_Result=2;
    if (x=="G") VMHL_Result=2;
    if (x=="g") VMHL_Result=2;
    if (x=="H") VMHL_Result=2;
    if (x=="h") VMHL_Result=2;

    if (x=="I") VMHL_Result=1;
    if (x=="i") VMHL_Result=1;

    if (x=="J") VMHL_Result=2;
    if (x=="j") VMHL_Result=2;
    if (x=="K") VMHL_Result=2;
    if (x=="k") VMHL_Result=2;
    if (x=="L") VMHL_Result=2;
    if (x=="l") VMHL_Result=2;
    if (x=="M") VMHL_Result=2;
    if (x=="m") VMHL_Result=2;
    if (x=="N") VMHL_Result=2;
    if (x=="n") VMHL_Result=2;

    if (x=="O") VMHL_Result=1;
    if (x=="o") VMHL_Result=1;

    if (x=="P") VMHL_Result=2;
    if (x=="p") VMHL_Result=2;
    if (x=="Q") VMHL_Result=2;
    if (x=="q") VMHL_Result=2;
    if (x=="R") VMHL_Result=2;
    if (x=="r") VMHL_Result=2;
    if (x=="S") VMHL_Result=2;
    if (x=="s") VMHL_Result=2;
    if (x=="T") VMHL_Result=2;
    if (x=="t") VMHL_Result=2;

    if (x=="U") VMHL_Result=1;
    if (x=="u") VMHL_Result=1;

    if (x=="V") VMHL_Result=2;
    if (x=="v") VMHL_Result=2;
    if (x=="W") VMHL_Result=2;
    if (x=="w") VMHL_Result=2;
    if (x=="X") VMHL_Result=2;
    if (x=="x") VMHL_Result=2;

    if (x=="Y") VMHL_Result=1;
    if (x=="y") VMHL_Result=1;

    if (x=="Z") VMHL_Result=2;
    if (x=="z") VMHL_Result=2;

    return VMHL_Result;
}