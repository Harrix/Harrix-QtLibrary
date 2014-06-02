QString THQt_AlphaBlendingColorToColor(double alpha, QString FirstRGB, QString SecondRGB)
{
    /*
    Функция накладывает сверху на цвет другой цвет с определенной прозрачностью.
    Входные параметры:
     alpha - прозрачность второго накладываемого цвета из интервала [0;1];
     FirstRGB - строка RGB кода первого цвета градиента, например: #63ddb2;
     SecondRGB - строка RGB кода последнего цвета градиента, например: #5845da.
    Возвращаемое значение:
     Строка содержащая код цвета, например: #25ffb5.
    */
    int R,G,B;
    int R1,G1,B1;
    int R2,G2,B2;

    THQt_RGBStringToThreeNumbers(FirstRGB, &R1, &G1, &B1);
    THQt_RGBStringToThreeNumbers(SecondRGB, &R2, &G2, &B2);

    R=alpha*R2+(1-alpha)*R1;
    G=alpha*G2+(1-alpha)*G1;
    B=alpha*B2+(1-alpha)*B1;

    return THQt_ThreeNumbersToRGBString(R, G, B);
}