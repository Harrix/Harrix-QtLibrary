template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VHQt_VectorResult)
{
    /*
    Функция считывает данные из QStringList в вектор.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VHQt_VectorResult - сюда будем записывать результат.
    Возвращаемое значение:
     Отсутствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VHQt_VectorResult.
1
52
6.45
    Пример использования:
///////////////////////////////////

QString DS=QDir::separator();
QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке
int N;
double *y;
QStringList List = HQt_ReadFileToQStringList(path+"1.txt");
N=HQt_CountOfRowsFromQStringList(List);
y=new double [N];

THQt_ReadVectorFromQStringList(List,y);//считываем

delete [] y;
///////////////////////////////////
    */
    int i;
    int N=QStringListFromFile.count();
    QString A;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        VHQt_VectorResult[i]=A.toDouble();
    }
}