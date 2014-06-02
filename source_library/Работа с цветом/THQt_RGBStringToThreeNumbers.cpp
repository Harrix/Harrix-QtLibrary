void THQt_RGBStringToThreeNumbers(QString RGB, int *R, int *G, int *B)
{
    /*
    Функция переводит строку RGB типа #25ffb5 в три числа от 0 до 255,
    которые кодируют  цвета.
    Входные параметры:
     RGB - строка, которая содержит код RGB цвета вида: #25ffb5.
     R - число от 0 до 255 включительно означающее красный цвет;
     G - число от 0 до 255 включительно означающее зеленый цвет;
     B - число от 0 до 255 включительно означающее синий цвет.
    Возвращаемое значение:
     Отсутствует.
    */
    *R=0;
    *G=0;
    *B=0;

    if (RGB.length()==7)
    {
        RGB=RGB.mid(1);

        QString RR=RGB.mid(0,2);
        QString GG=RGB.mid(2,2);
        QString BB=RGB.mid(4,2);

        bool ok;

        *R=RR.toInt(&ok,16);
        *G=GG.toInt(&ok,16);
        *B=BB.toInt(&ok,16);
    }
}