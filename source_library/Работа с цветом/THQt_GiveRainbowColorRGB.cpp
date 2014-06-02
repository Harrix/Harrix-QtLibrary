QString THQt_GiveRainbowColorRGB(double position)
{
    /*
    Функция выдает код RGB из градиента радуги для любой позиции от 0 до 1 из этого градиента.
    То есть это перевод числа в RGB (из радуги).
    Входные параметры:
     position - позиция из интервала [0;1], которая говорит какой цвет выдать из радуги.
    Возвращаемое значение:
     Строка содержащая код цвета, например: #25ffb5.
    */
    if (position<0) position=0;
    if (position>1) position=1;

    int R=0, G=0, B=0;//

    int nmax=6;// number of color bars
    double m=nmax* position;
    int n=int(m); // integer of m
    double f=m-n;  // fraction of m
    int t=int(f*255);

    switch( n){
    case 0: {
        R = 255;
        G = t;
        B = 0;
        break;
    };
    case 1: {
        R = 255 - t;
        G = 255;
        B = 0;
        break;
    };
    case 2: {
        R = 0;
        G = 255;
        B = t;
        break;
    };
    case 3: {
        R = 0;
        G = 255 - t;
        B = 255;
        break;
    };
    case 4: {
        R = t;
        G = 0;
        B = 255;
        break;
    };
    case 5: {
        R = 255;
        G = 0;
        B = 255 - t;
        break;
    };

    }; // case

    QString RGB=THQt_ThreeNumbersToRGBString(R,G,B);

    return RGB;
}