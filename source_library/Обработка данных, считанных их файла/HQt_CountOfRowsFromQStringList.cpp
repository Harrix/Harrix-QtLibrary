int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile)
{
    /*
    Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile.
    Считается, что файл правильный, ошибки не проверяются. В строке числа разделяются через табуляцию \t,
    а десятичные числа используют точку, а не запятую. Во всех столбцах должно быть одинаковое число элементов.
    Поэтому, если в одном столбце больше элементов, чем в других, то в остальные столбцы на место недостающих
    элементов ставнится знак "-".
    Входные параметры:
     QStringListFromFile - непосредственно сам файл.
    Возвращаемое значение:
     Число строк.
    Пример содержимого QStringListFromFile:
1	2.2
2.8	9
    */
    int VMHL_Result_N=QStringListFromFile.count();

    return VMHL_Result_N;
}
//---------------------------------------------------------------------------
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int k)
{
    /*
    Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile.
    Считается, что файл правильный, ошибки не проверяются. В строке числа разделяются через табуляцию \t,
    а десятичные числа используют точку, а не запятую. Во всех столбцах должно быть одинаковое число элементов.
    Поэтому, если в одном столбце больше элементов, чем в других, то в остальные столбцы на место недостающих
    элементов ставится знак "-".
    Входные параметры:
     QStringListFromFile - непосредственно сам файл.
	 k - номер столбца.
    Возвращаемое значение:
     Число строк в столбце.
    Пример содержимого QStringListFromFile:
1	2.2
2.8	9
    */
    int N = HQt_CountOfRowsFromQStringList(QStringListFromFile);
    QString A,X;
    int i,j;

    for (i=0;(i<N)&&(X!="-");i++)
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
    }

    int VMHL_Result_N;
    if (X=="-")
        VMHL_Result_N=i-1;
    else
        VMHL_Result_N=i;

    return VMHL_Result_N;
}
//---------------------------------------------------------------------------
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int *VMHL_ResultVector)
{
    /*
    Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.
    Считается, что файл правильный, ошибки не проверяются. В строке числа разделяются через табуляцию \t,
    а десятичные числа используют точку, а не запятую. Во всех столбцах должно быть одинаковое число элементов.
    Поэтому, если в одном столбце больше элементов, чем в других, то в остальные столбцы на место недостающих
    элементов ставится знак "-".
    Входные параметры:
     QStringListFromFile - непосредственно сам файл;
     VMHL_ResultVector - сюда количество стро заносится.
    Возвращаемое значение:
     Число строк в QStringListFromFile (в правильном файле это число равно максимальному числу строк в каком-нибудь столбце).
    Пример содержимого QStringListFromFile:
1	2.2
2.8	9
    */
    int i,j;
    QString A,X;
    int M=HQt_CountOfColsFromQStringList(QStringListFromFile);
    int N=QStringListFromFile.count();

    for (j=0;j<M;j++) VMHL_ResultVector[j]=0;

    int *Stop=new int[M];
    for (j=0;j<M;j++) Stop[j]=0;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        for (j=0;j<M;j++)
        {
            X=A.mid(0,A.indexOf("\t"));
            A=A.mid(A.indexOf("\t")+1);
            A=A.trimmed();
            if ((X!="-")&&(Stop[j]==0))
            {
                VMHL_ResultVector[j]++;
            }
            if ((X=="-"))
            {
                Stop[j]=1;
            }
        }
    }

    delete[] Stop;

    return N;
}