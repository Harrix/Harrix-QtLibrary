template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VHQt_VectorResult1, T *VHQt_VectorResult2)
{
    /*
    Функция считывает данные из QStringList в два вектора.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VHQt_VectorResult1 - сюда будем записывать результат первого вектора;
     VHQt_VectorResult2 - сюда будем записывать результат второго вектора.
    Возвращаемое значение:
     Отсутствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VHQt_VectorResult.
1	2
52	3
6.4	7
    Пример использования:
///////////////////////////////////

QString DS=QDir::separator();
QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке
int N;
double *x,*y;
QStringList List = HQt_ReadFileToQStringList(path+"2.txt");
N=HQt_CountOfRowsFromQStringList(List);
x=new double [N];
y=new double [N];

THQt_ReadTwoVectorFromQStringList(List,x,y);

delete [] y;
delete [] x;
///////////////////////////////////
    */
    int i;
    int N=QStringListFromFile.count();
    QString A,X1,X2;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        X1=A;
        X2=A;
        X1=X1.mid(0,X1.lastIndexOf("\t"));
        X2=X2.mid(X2.lastIndexOf("\t"));

        VHQt_VectorResult1[i]=X1.toDouble();
        VHQt_VectorResult2[i]=X2.toDouble();
    }
}
//---------------------------------------------------------------------------
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VHQt_VectorResult1, QDate *VHQt_VectorResult2)
{
    /*
    Функция считывает данные из QStringList в два вектора (второй вектор - это даты).
    Входные параметры:
     VHQt_VectorResult1 - сюда будем записывать результат первого вектора;
     VHQt_VectorResult2 - сюда будем записывать результат второго вектора (даты).
    Возвращаемое значение:
     Отсутствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VHQt_VectorResult.
33	21.08.2012
32	24.07.2012
31	20.06.2012
    */
    int i;
    int N=QStringListFromFile.count();
    QString A,X1,X2;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        X1=A;
        X2=A;
        X1=X1.mid(0,X1.lastIndexOf("\t"));
        X2=X2.mid(X2.lastIndexOf("\t"));
        X2=X2.trimmed();

        VHQt_VectorResult1[i]=X1.toDouble();

        int p1=X2.lastIndexOf(".");
        int p2=X2.indexOf(".");

        QDate DBeginDate;
        if ((p1==2)&&(p2==5))
            DBeginDate=QDate::fromString(X2, "yyyy.MM.dd");
        else
            DBeginDate=QDate::fromString(X2, "dd.MM.yyyy");

        VHQt_VectorResult2[i]=DBeginDate;
    }
}