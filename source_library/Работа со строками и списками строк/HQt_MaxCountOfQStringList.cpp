int HQt_MaxCountOfQStringList(QStringList x)
{
    /*
    Функция выдает длину макимальной по длине строки в QStringList.
    Входные параметры:
     x - список строк.
    Возвращаемое значение:
     Длина макимальной по длине строки.
    */
    int VMHL_Result=0;

    VMHL_Result=x.at(0).count();

    for (int i=1;i<x.count();i++)
    {
        if (x.at(i).count()>VMHL_Result) VMHL_Result=x.at(i).count();
    }

    return VMHL_Result;
}