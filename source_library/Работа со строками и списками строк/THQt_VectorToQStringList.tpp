template <class T> void THQt_VectorToQStringList(T *x, int N)
{
    /*
    Функция переводит вектор чисел в QStringList.
    Входные параметры:
     x - переводимый массив.
     N - Количество элементов в массиве.
    Возвращаемое значение:
     Список строк.
*/
    QStringList Result;

    for (int i=0;i<N;i++)
        Result << QString::number(x[i]);

    return Result;
}