bool HQt_CheckRus(QString S)
{
    /*
    Функция проверяет наличие русских букв в строке.
    Входные параметры:
     S - проверяемая строка.
    Возвращаемое значение:
     true - естm буквы русские;
     false - нет букв русских.
    */
    bool VMHL_Result=false;

    QString x;

    for (int i=0;i<S.count();i++)
    {
        x=S.at(i);

        if (x=="А") VMHL_Result=true;
        if (x=="а") VMHL_Result=true;
        if (x=="Б") VMHL_Result=true;
        if (x=="б") VMHL_Result=true;
        if (x=="В") VMHL_Result=true;
        if (x=="в") VMHL_Result=true;
        if (x=="Г") VMHL_Result=true;
        if (x=="г") VMHL_Result=true;
        if (x=="Д") VMHL_Result=true;
        if (x=="д") VMHL_Result=true;
        if (x=="Е") VMHL_Result=true;
        if (x=="е") VMHL_Result=true;
        if (x=="Ё") VMHL_Result=true;
        if (x=="ё") VMHL_Result=true;
        if (x=="Ж") VMHL_Result=true;
        if (x=="ж") VMHL_Result=true;
        if (x=="З") VMHL_Result=true;
        if (x=="з") VMHL_Result=true;
        if (x=="И") VMHL_Result=true;
        if (x=="и") VMHL_Result=true;
        if (x=="Й") VMHL_Result=true;
        if (x=="й") VMHL_Result=true;
        if (x=="К") VMHL_Result=true;
        if (x=="к") VMHL_Result=true;
        if (x=="Л") VMHL_Result=true;
        if (x=="л") VMHL_Result=true;
        if (x=="М") VMHL_Result=true;
        if (x=="м") VMHL_Result=true;
        if (x=="Н") VMHL_Result=true;
        if (x=="н") VMHL_Result=true;
        if (x=="О") VMHL_Result=true;
        if (x=="о") VMHL_Result=true;
        if (x=="П") VMHL_Result=true;
        if (x=="п") VMHL_Result=true;
        if (x=="Р") VMHL_Result=true;
        if (x=="р") VMHL_Result=true;
        if (x=="С") VMHL_Result=true;
        if (x=="с") VMHL_Result=true;
        if (x=="Т") VMHL_Result=true;
        if (x=="т") VMHL_Result=true;
        if (x=="У") VMHL_Result=true;
        if (x=="у") VMHL_Result=true;
        if (x=="Ф") VMHL_Result=true;
        if (x=="ф") VMHL_Result=true;
        if (x=="Х") VMHL_Result=true;
        if (x=="х") VMHL_Result=true;
        if (x=="Ц") VMHL_Result=true;
        if (x=="ц") VMHL_Result=true;
        if (x=="Ч") VMHL_Result=true;
        if (x=="ч") VMHL_Result=true;
        if (x=="Ш") VMHL_Result=true;
        if (x=="ш") VMHL_Result=true;
        if (x=="Щ") VMHL_Result=true;
        if (x=="щ") VMHL_Result=true;
        if (x=="Ъ") VMHL_Result=true;
        if (x=="ъ") VMHL_Result=true;
        if (x=="Ы") VMHL_Result=true;
        if (x=="ы") VMHL_Result=true;
        if (x=="Ь") VMHL_Result=true;
        if (x=="ь") VMHL_Result=true;
        if (x=="Э") VMHL_Result=true;
        if (x=="э") VMHL_Result=true;
        if (x=="Ю") VMHL_Result=true;
        if (x=="ю") VMHL_Result=true;
        if (x=="Я") VMHL_Result=true;
        if (x=="я") VMHL_Result=true;
    }

    return VMHL_Result;
}