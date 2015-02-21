template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VHQt_VectorResult)
{
    /*
    Функция считывает данные какого-то k столбца из QStringList в виде матрицы.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     k - номер столбца, начиная с нуля, который считываем;
     VHQt_VectorResult - сюда будем записывать результат считывания столбца из матрицы.
    Возвращаемое значение:
     Количество элементов в столбце. Как только встречает вместо числа символ "-", то функция считает, что вектор закончился.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VHQt_VectorResult.
1	2	6
52	3	96
6.4	7	4
    Второй пример содержимого VHQt_VectorResult.
1	2	6	5
52	3	96	5
-	-	4   2
    Пример использования:
///////////////////////////////////
QString DS=QDir::separator();
QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

QStringList List = HQt_ReadFileToQStringList(path+"5.txt");
int N;
N=HQt_CountOfRowsFromQStringList(List,k);

double *X;
X=new double[N];

int k=2;//номер столбца

THQt_ReadColFromQStringList(List, k, X);

delete [] X;
///////////////////////////////////
    */
    int i,j;
    int N;
    N = HQt_CountOfRowsFromQStringList(QStringListFromFile,k);
    QString A,X;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        for (j=0;j<k;j++)
        {
            A=A.mid(A.indexOf("\t")+1);
            A=A.trimmed();
        }
        X=A.mid(0,A.indexOf("\t"));
        X=X.trimmed();
        VHQt_VectorResult[i]=X.toDouble();
    }
}