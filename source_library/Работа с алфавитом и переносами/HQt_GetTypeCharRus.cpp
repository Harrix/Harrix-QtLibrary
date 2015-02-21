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
    int VHQt_Result=0;

    if (x=="А") VHQt_Result=1;
    if (x=="а") VHQt_Result=1;

    if (x=="Б") VHQt_Result=2;
    if (x=="б") VHQt_Result=2;
    if (x=="В") VHQt_Result=2;
    if (x=="в") VHQt_Result=2;
    if (x=="Г") VHQt_Result=2;
    if (x=="г") VHQt_Result=2;
    if (x=="Д") VHQt_Result=2;
    if (x=="д") VHQt_Result=2;

    if (x=="Е") VHQt_Result=1;
    if (x=="е") VHQt_Result=1;
    if (x=="Ё") VHQt_Result=1;
    if (x=="ё") VHQt_Result=1;

    if (x=="Ж") VHQt_Result=2;
    if (x=="ж") VHQt_Result=2;
    if (x=="З") VHQt_Result=2;
    if (x=="з") VHQt_Result=2;

    if (x=="И") VHQt_Result=1;
    if (x=="и") VHQt_Result=1;

    if (x=="Й") VHQt_Result=3;
    if (x=="й") VHQt_Result=3;

    if (x=="К") VHQt_Result=2;
    if (x=="к") VHQt_Result=2;
    if (x=="Л") VHQt_Result=2;
    if (x=="л") VHQt_Result=2;
    if (x=="М") VHQt_Result=2;
    if (x=="м") VHQt_Result=2;
    if (x=="Н") VHQt_Result=2;
    if (x=="н") VHQt_Result=2;

    if (x=="О") VHQt_Result=1;
    if (x=="о") VHQt_Result=1;

    if (x=="П") VHQt_Result=2;
    if (x=="п") VHQt_Result=2;
    if (x=="Р") VHQt_Result=2;
    if (x=="р") VHQt_Result=2;
    if (x=="С") VHQt_Result=2;
    if (x=="с") VHQt_Result=2;
    if (x=="Т") VHQt_Result=2;
    if (x=="т") VHQt_Result=2;

    if (x=="У") VHQt_Result=1;
    if (x=="у") VHQt_Result=1;

    if (x=="Ф") VHQt_Result=2;
    if (x=="ф") VHQt_Result=2;
    if (x=="Х") VHQt_Result=2;
    if (x=="х") VHQt_Result=2;
    if (x=="Ц") VHQt_Result=2;
    if (x=="ц") VHQt_Result=2;
    if (x=="Ч") VHQt_Result=2;
    if (x=="ч") VHQt_Result=2;
    if (x=="Ш") VHQt_Result=2;
    if (x=="ш") VHQt_Result=2;
    if (x=="Щ") VHQt_Result=2;
    if (x=="щ") VHQt_Result=2;

    if (x=="Ъ") VHQt_Result=3;
    if (x=="ъ") VHQt_Result=3;

    if (x=="Ы") VHQt_Result=1;
    if (x=="ы") VHQt_Result=1;

    if (x=="Ь") VHQt_Result=3;
    if (x=="ь") VHQt_Result=3;

    if (x=="Э") VHQt_Result=1;
    if (x=="э") VHQt_Result=1;
    if (x=="Ю") VHQt_Result=1;
    if (x=="ю") VHQt_Result=1;
    if (x=="Я") VHQt_Result=1;
    if (x=="я") VHQt_Result=1;

    return VHQt_Result;
}