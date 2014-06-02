int HQt_GetTypeCharRus(QString x)
{
    /*
    Функция выдает тип вводимого QString (считая, что это буква). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.
    Входные параметры:
     x - некая буква.
    Возвращаемое значение:
     1 - гласная;
     2 - согласная;
     3 - буква из множества ьъй;
     0 - иначе (английские или какие-то иные).
    */
    int VMHL_Result=0;

    if (x=="А") VMHL_Result=1;
    if (x=="а") VMHL_Result=1;

    if (x=="Б") VMHL_Result=2;
    if (x=="б") VMHL_Result=2;
    if (x=="В") VMHL_Result=2;
    if (x=="в") VMHL_Result=2;
    if (x=="Г") VMHL_Result=2;
    if (x=="г") VMHL_Result=2;
    if (x=="Д") VMHL_Result=2;
    if (x=="д") VMHL_Result=2;

    if (x=="Е") VMHL_Result=1;
    if (x=="е") VMHL_Result=1;
    if (x=="Ё") VMHL_Result=1;
    if (x=="ё") VMHL_Result=1;

    if (x=="Ж") VMHL_Result=2;
    if (x=="ж") VMHL_Result=2;
    if (x=="З") VMHL_Result=2;
    if (x=="з") VMHL_Result=2;

    if (x=="И") VMHL_Result=1;
    if (x=="и") VMHL_Result=1;

    if (x=="Й") VMHL_Result=3;
    if (x=="й") VMHL_Result=3;

    if (x=="К") VMHL_Result=2;
    if (x=="к") VMHL_Result=2;
    if (x=="Л") VMHL_Result=2;
    if (x=="л") VMHL_Result=2;
    if (x=="М") VMHL_Result=2;
    if (x=="м") VMHL_Result=2;
    if (x=="Н") VMHL_Result=2;
    if (x=="н") VMHL_Result=2;

    if (x=="О") VMHL_Result=1;
    if (x=="о") VMHL_Result=1;

    if (x=="П") VMHL_Result=2;
    if (x=="п") VMHL_Result=2;
    if (x=="Р") VMHL_Result=2;
    if (x=="р") VMHL_Result=2;
    if (x=="С") VMHL_Result=2;
    if (x=="с") VMHL_Result=2;
    if (x=="Т") VMHL_Result=2;
    if (x=="т") VMHL_Result=2;

    if (x=="У") VMHL_Result=1;
    if (x=="у") VMHL_Result=1;

    if (x=="Ф") VMHL_Result=2;
    if (x=="ф") VMHL_Result=2;
    if (x=="Х") VMHL_Result=2;
    if (x=="х") VMHL_Result=2;
    if (x=="Ц") VMHL_Result=2;
    if (x=="ц") VMHL_Result=2;
    if (x=="Ч") VMHL_Result=2;
    if (x=="ч") VMHL_Result=2;
    if (x=="Ш") VMHL_Result=2;
    if (x=="ш") VMHL_Result=2;
    if (x=="Щ") VMHL_Result=2;
    if (x=="щ") VMHL_Result=2;

    if (x=="Ъ") VMHL_Result=3;
    if (x=="ъ") VMHL_Result=3;

    if (x=="Ы") VMHL_Result=1;
    if (x=="ы") VMHL_Result=1;

    if (x=="Ь") VMHL_Result=3;
    if (x=="ь") VMHL_Result=3;

    if (x=="Э") VMHL_Result=1;
    if (x=="э") VMHL_Result=1;
    if (x=="Ю") VMHL_Result=1;
    if (x=="ю") VMHL_Result=1;
    if (x=="Я") VMHL_Result=1;
    if (x=="я") VMHL_Result=1;

    return VMHL_Result;
}