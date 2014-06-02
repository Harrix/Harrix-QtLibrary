QString THQt_ThreeNumbersToRGBString(int R, int G, int B)
{
    /*
    Функция переводит три числа в строку RGB типа #25ffb5, как в Photoshop или HTML.
    Входные параметры:
     int R - число от 0 до 255 включительно означающее красный цвет;
     int G - число от 0 до 255 включительно означающее зеленый цвет;
     int B - число от 0 до 255 включительно означающее синий цвет.
    Возвращаемое значение:
     Строка содержащая код цвета, например: #25ffb5.
    */
    if (R<0) R=0;
    if (R>255) R=255;
    if (G<0) G=0;
    if (G>255) G=255;
    if (B<0) B=0;
    if (B>255) B=255;

    QString RR=QString::number(R, 16);
    QString GG=QString::number(G, 16);
    QString BB=QString::number(B, 16);

    if (RR.length()==1) RR="0"+RR;
    if (GG.length()==1) GG="0"+GG;
    if (BB.length()==1) BB="0"+BB;

    QString RGB="#"+RR+GG+BB;

    return RGB;
}