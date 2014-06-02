QStringList HQt_NaturalSortingQStringList (QStringList StringList)
{
    /*
    Функция сортировки строк в сортировки строк QStringList в натуральном виде, например,
    строки: z1, z10, z2 сортируются как z1, z2, z10.
    Входные параметры:
     StringList - сортируемый список строк.
    Возвращаемое значение:
     Отсортированный список строк.
    */
    QStringList SortList=StringList;

    qSort(SortList.begin(),SortList.end(),HQt_NaturalCompareTwoQStrings);

    return SortList;
}