template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T **VHQt_MatrixResult)
{
    /*
    Функция считывает данные из QStringList в матрицу.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VHQt_MatrixResult - сюда будем записывать результат считывания матрицы.
    Возвращаемое значение:
     Отсутствует.
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

int N,M;
M=HQt_CountOfColsFromQStringList(List);
N=HQt_CountOfRowsFromQStringList(List);

double **X;
X=new double*[N];
for (int i=0;i<N;i++) X[i]=new double[M];

THQt_ReadMatrixFromQStringList(List, X);

for (int i=0;i<N;i++) delete [] X[i];
delete [] X;
///////////////////////////////////
    */
    int i,j;
    int N,M;
    M=HQt_CountOfColsFromQStringList(QStringListFromFile);
    N=HQt_CountOfRowsFromQStringList(QStringListFromFile);
    QString A,X;

    for (i=0;i<N;i++)
        for (j=0;j<M;j++)
            VHQt_MatrixResult[i][j]=0;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        for (j=0;j<M;j++)
        {
            X=A.mid(0,A.indexOf("\t"));
            A=A.mid(A.indexOf("\t")+1);
            A=A.trimmed();
            VHQt_MatrixResult[i][j]=X.toDouble();
        }
    }
}