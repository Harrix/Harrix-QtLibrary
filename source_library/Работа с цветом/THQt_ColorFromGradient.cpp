QString THQt_ColorFromGradient(double position, QString FirstRGB, QString SecondRGB)
{
    /*
    Функция выдает код RGB из градиента от одного цвета FirstRGB к другому цвету SecondRGB согласно позиции от 0 до 1.
    Входные параметры:
     position - позиция из интервала [0;1], которая говорит какой цвет выдать из градиента;
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

    R=R1+position*(R2-R1);
    G=G1+position*(G2-G1);
    B=B1+position*(B2-B1);

    return THQt_ThreeNumbersToRGBString(R, G, B);
}