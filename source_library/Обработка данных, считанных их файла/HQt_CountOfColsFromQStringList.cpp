int HQt_CountOfColsFromQStringList(QStringList QStringListFromFile)
{
    /*
    Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.
    Считается, что файл правильный, ошибки не проверяются. В строке числа разделяются через табуляцию \t,
    а десятичные числа используют точку, а не запятую. Во всех столбцах должно быть одинаковое число элементов.
    Поэтому, если в одном столбце больше элементов, чем в других, то в остальные столбцы на место недостающих
    элементов ставится знак "-".
    Входные параметры:
     QStringListFromFile - непосредственно сам файл.
    Возвращаемое значение:
     Число столбцов (по первой строке).
    Пример содержимого QStringListFromFile:
1	2.2
2.8	9
    */
    QString A=QStringListFromFile.at(0);

    int VMHL_Result_M=A.count("\t")+1;

    return VMHL_Result_M;
}