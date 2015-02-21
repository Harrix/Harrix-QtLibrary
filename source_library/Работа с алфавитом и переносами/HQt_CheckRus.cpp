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
    bool VHQt_Result=false;

    QString x;

    for (int i=0;i<S.count();i++)
    {
        x=S.at(i);

        if (x=="А") VHQt_Result=true;
        if (x=="а") VHQt_Result=true;
        if (x=="Б") VHQt_Result=true;
        if (x=="б") VHQt_Result=true;
        if (x=="В") VHQt_Result=true;
        if (x=="в") VHQt_Result=true;
        if (x=="Г") VHQt_Result=true;
        if (x=="г") VHQt_Result=true;
        if (x=="Д") VHQt_Result=true;
        if (x=="д") VHQt_Result=true;
        if (x=="Е") VHQt_Result=true;
        if (x=="е") VHQt_Result=true;
        if (x=="Ё") VHQt_Result=true;
        if (x=="ё") VHQt_Result=true;
        if (x=="Ж") VHQt_Result=true;
        if (x=="ж") VHQt_Result=true;
        if (x=="З") VHQt_Result=true;
        if (x=="з") VHQt_Result=true;
        if (x=="И") VHQt_Result=true;
        if (x=="и") VHQt_Result=true;
        if (x=="Й") VHQt_Result=true;
        if (x=="й") VHQt_Result=true;
        if (x=="К") VHQt_Result=true;
        if (x=="к") VHQt_Result=true;
        if (x=="Л") VHQt_Result=true;
        if (x=="л") VHQt_Result=true;
        if (x=="М") VHQt_Result=true;
        if (x=="м") VHQt_Result=true;
        if (x=="Н") VHQt_Result=true;
        if (x=="н") VHQt_Result=true;
        if (x=="О") VHQt_Result=true;
        if (x=="о") VHQt_Result=true;
        if (x=="П") VHQt_Result=true;
        if (x=="п") VHQt_Result=true;
        if (x=="Р") VHQt_Result=true;
        if (x=="р") VHQt_Result=true;
        if (x=="С") VHQt_Result=true;
        if (x=="с") VHQt_Result=true;
        if (x=="Т") VHQt_Result=true;
        if (x=="т") VHQt_Result=true;
        if (x=="У") VHQt_Result=true;
        if (x=="у") VHQt_Result=true;
        if (x=="Ф") VHQt_Result=true;
        if (x=="ф") VHQt_Result=true;
        if (x=="Х") VHQt_Result=true;
        if (x=="х") VHQt_Result=true;
        if (x=="Ц") VHQt_Result=true;
        if (x=="ц") VHQt_Result=true;
        if (x=="Ч") VHQt_Result=true;
        if (x=="ч") VHQt_Result=true;
        if (x=="Ш") VHQt_Result=true;
        if (x=="ш") VHQt_Result=true;
        if (x=="Щ") VHQt_Result=true;
        if (x=="щ") VHQt_Result=true;
        if (x=="Ъ") VHQt_Result=true;
        if (x=="ъ") VHQt_Result=true;
        if (x=="Ы") VHQt_Result=true;
        if (x=="ы") VHQt_Result=true;
        if (x=="Ь") VHQt_Result=true;
        if (x=="ь") VHQt_Result=true;
        if (x=="Э") VHQt_Result=true;
        if (x=="э") VHQt_Result=true;
        if (x=="Ю") VHQt_Result=true;
        if (x=="ю") VHQt_Result=true;
        if (x=="Я") VHQt_Result=true;
        if (x=="я") VHQt_Result=true;
    }

    return VHQt_Result;
}