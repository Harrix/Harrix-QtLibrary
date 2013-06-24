#ifndef QTHARRIXLIBRARY_H
#define QTHARRIXLIBRARY_H

#include <QDebug>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QTextCodec>
#include <QTextEdit>
#include <QDateTime>
#include <QApplication>
#include <typeinfo>

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ОБЪЯВЛЕНИЯ ФУНКЦИЙ
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

QString HQt_ReadFile(QString filename);//Функция считывает текстовой файл в QString.
QStringList HQt_ReadFileToQStringList(QString filename);//Функция считывает текстовой файл в QStringList.
void HQt_SaveFile(QString line, QString filename);//Функция сохраняет QString в текстовой файл.
QString HQt_ListFilesInDir(QString path);//Функция считывает список файлов (включая скрытые) в директории в QString.
QStringList HQt_ListFilesInDirQStringList(QString path);//Функция считывает список файлов (включая скрытые) в директории в QStringList.
QString HQt_ListDirsInDir(QString path);//Функция считывает список директорий в директории в QString.
QStringList HQt_ListDirsInDirQStringList(QString path);//Функция считывает список директорий в директории в QStringList.
QString HQt_GetExpFromFilename(QString filename);//Функция получает расширение файла по его имени.
QStringList HQt_QStringToQStringList(QString line);//Функция переводит QString в QStringList.
QString HQt_QStringListToQString(QStringList lines);//Функция переводит QStringList в QString.
bool HQt_FileExists(QString filename);//Функция проверяет сущестование файла.
QString HQt_GetNameFromFilename(QString filename);//Функция получает имя файла без расширения по его имени.
bool HQt_CopyFile(QString filename, QString dir);//Функция копирует файл filename в папку dir.
bool HQt_CopyFile(QString filename, QString dir, bool overwrite);//Функция копирует файл filename в папку dir, с возможносью перезаписи.
QString HQt_GetFilenameFromFullFilename(QString filename);//Функция получает имя файла по полному пути.
QString HQt_WriteTime(int t);//Функция переводит миллисекунды в строку с описанием сколько это минут, секунд и др.
QString HQt_UniqueName ();//Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.
QString HQt_UniqueName (QString BeginString);//Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.
QString HQt_UniqueNameOnlyNumbers ();//Функция возвращает уникальную строку, которую можно использовать как некий идентификатор. В строке только цифры.
void HQt_Delay(int MSecs);//Функция делает задержку в MSecs миллисекунд.
QString HQt_RandomString(int Length);//Функция генерирует случайную строку из английских больших и малых букв.
int HQt_DaysBetweenDates(QDate BeginDate, QDate EndDate);//Функция определяет сколько дней между двумя датами.
int HQt_DaysBetweenDates(QString BeginDate, QString EndDate);//Функция определяет сколько дней между двумя датами.

int HQt_CountOfColsFromQStringList(QStringList QStringListFromFile);//Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile);//Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile.
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int k);//Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile.
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int *VMHL_ResultVector);//Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.

template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult);//Функция считывает данные из QStringList в вектор.
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, T *VMHL_VectorResult2);//Функция считывает данные из QStringList в два вектора.
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2);//Функция считывает данные из QStringList в два вектора (второй вектор - это даты).
template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T **VMHL_MatrixResult);//Функция считывает данные из QStringList в матрицу.
template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VMHL_VectorResult);//Функция считывает данные какого-то k столбца из QStringList в виде матрицы.
void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QDate *VMHL_VectorResult);//Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы.

//Для отображения HTML текста
QString HQt_BeginHtml (); //Функция возвращает строку с началом HTML файла, в который другими функциями добавляются иные данные.
QString HQt_EndHtml (); //Функция возвращает строку с концовкой HTML файла, в который другими функциями добавляются иные данные.
QString HQt_ShowText (QString TitleX);
template <class T> QString THQt_ShowNumber (T VMHL_X, QString TitleX, QString NameX);//Функция возвращает строку с выводом некоторого числа VMHL_X с HTML кодами.
template <class T> QString THQt_ShowVector (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector);//Функция возвращает строку с выводом некоторый вектора VMHL_Vector с HTML кодами.
template <class T> QString THQt_NumberToText (T VMHL_X);//Функция выводит число VMHL_X в строку.
template <class T> QString THQt_ShowVectorT (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector);//Функция возвращает строку с выводом некоторый вектора VMHL_Vector в траснпонированном виде с HTML кодами.
template <class T> QString THQt_ShowMatrix (T *VMHL_Matrix, int VMHL_N, int VMHL_M, QString TitleMatrix, QString NameMatrix);//Функция возвращает строку с выводом некоторой матрицы VMHL_Matrix с HTML кодами.
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine);//Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл.
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine);//Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл. Отличается от основной функцией отсутствием параметра NameLine(название первого графика (для легенды)).
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine);// Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Отличается от основной функцией отсутствием булевских параметров в конце - все по умолчанию делается.
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N);//Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Отличается от основной функцией отсутствием булевских параметров в конце и названий осей и графиков - для быстрого отображения графика без лишних телодвижений.
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints);//Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл.
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints);//Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Отличается отсуствием параметров NameLine1 и NameLine2. То есть нет легенды у графика.
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2);//Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл. Отличается от основной функции отсутствием булевских переменных - все по умолчанию.
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N);//Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Отличается от основной функции отсутствием булевских переменных и названий графика, осей, линий - все по умолчанию.

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// РЕАЛИЗАЦИЯ ШАБЛОНОВ
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult)
{
    /*
    Функция считывает данные из QStringList в вектор.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VMHL_VectorResult - сюда будем записывать результат.
    Возвращаемое значение:
     Отсуствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VMHL_VectorResult.
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
        VMHL_VectorResult[i]=A.toDouble();
    }
}
//---------------------------------------------------------------------------

template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, T *VMHL_VectorResult2)
{
    /*
    Функция считывает данные из QStringList в два вектора.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VMHL_VectorResult1 - сюда будем записывать результат первого вектора;
     VMHL_VectorResult2 - сюда будем записывать результат второго вектора.
    Возвращаемое значение:
     Отсуствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VMHL_VectorResult.
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

        VMHL_VectorResult1[i]=X1.toDouble();
        VMHL_VectorResult2[i]=X2.toDouble();
    }
}
//---------------------------------------------------------------------------

template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2)
{
    /*
    Функция считывает данные из QStringList в два вектора (второй вектор - это даты).
    Входные параметры:
     VMHL_VectorResult1 - сюда будем записывать результат первого вектора;
     VMHL_VectorResult2 - сюда будем записывать результат второго вектора (даты).
    Возвращаемое значение:
     Отсуствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VMHL_VectorResult.
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

        VMHL_VectorResult1[i]=X1.toDouble();

        int p1=X2.lastIndexOf(".");
        int p2=X2.indexOf(".");

        QDate DBeginDate;
        if ((p1==2)&&(p2==5))
            DBeginDate=QDate::fromString(X2, "yyyy.MM.dd");
        else
            DBeginDate=QDate::fromString(X2, "dd.MM.yyyy");

        VMHL_VectorResult2[i]=DBeginDate;
    }
}
//---------------------------------------------------------------------------

template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T **VMHL_MatrixResult)
{
    /*
    Функция считывает данные из QStringList в матрицу.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     VMHL_MatrixResult - сюда будем записывать результат считывания матрицы.
    Возвращаемое значение:
     Отсуствует.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VMHL_VectorResult.
1	2	6
52	3	96
6.4	7	4
    Второй пример содержимого VMHL_VectorResult.
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
            VMHL_MatrixResult[i][j]=0;

    for (i=0;i<N;i++)
    {
        A=QStringListFromFile.at(i);
        A=A.trimmed();
        for (j=0;j<M;j++)
        {
            X=A.mid(0,A.indexOf("\t"));
            A=A.mid(A.indexOf("\t")+1);
            A=A.trimmed();
            VMHL_MatrixResult[i][j]=X.toDouble();
        }
    }
}
//---------------------------------------------------------------------------

template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VMHL_VectorResult)
{
    /*
    Функция считывает данные какого-то k столбца из QStringList в виде матрицы.
    Входные параметры:
     QStringListFromFile - отсюда берем информацию;
     k - номер столбца, начиная с нуля, который считываем;
     VMHL_VectorResult - сюда будем записывать результат считывания столбца из матрицы.
    Возвращаемое значение:
     Количество элементов в столбце. Как только встречает вместо числа символ "-", то функция считает, что вектор закончился.
    Примечание:
     Десятичные числа должны разделяться точкой.
    Пример содержимого VMHL_VectorResult.
1	2	6
52	3	96
6.4	7	4
    Второй пример содержимого VMHL_VectorResult.
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
        VMHL_VectorResult[i]=X.toDouble();
    }
}
//---------------------------------------------------------------------------

//Функции для получения HTML кода для вывода в webView

template <class T> QString THQt_ShowNumber (T VMHL_X, QString TitleX, QString NameX)
{
    /*
    Функция возвращает строку с выводом некоторого числа VMHL_X с HTML кодами. Для добавление в html файл.
    Входные параметры:
     VMHL_X - выводимое число;
     TitleX - заголовок выводимого числа;
     NameX - обозначение числа.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым числом.
    */
    QString VMHL_Result;

    VMHL_Result="<p><b>"+TitleX+":</b><br>";

    VMHL_Result+=NameX+"=<b><font color=\"#4200ff\">"+QString::number(VMHL_X)+"</font></b></p>\n";

    return VMHL_Result;
}
//---------------------------------------------------------------------------

template <class T> QString THQt_NumberToText (T VMHL_X)
{
    /*
    Функция выводит число VMHL_X в строку.
    Входные параметры:
     VMHL_X - выводимое число.
    Возвращаемое значение:
     Строка, в которой записано число.
    */
    QString VMHL_Result;
    VMHL_Result="<b><font color=\"#4200ff\">"+QString::number(VMHL_X)+"</font></b>";
    return VMHL_Result;
}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowVector (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector)
{
    /*
    Функция возвращает строку с выводом некоторого вектора VMHL_Vector с HTML кодами. Для добавление в html файл.
    Входные параметры:
     VMHL_Vector - указатель на выводимый вектор;
     VMHL_N - количество элементов вектора;
     TitleVector - заголовок выводимого вектора;
     NameVector - обозначение вектора.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым вектором.
    */
    QString VMHL_Result;
    VMHL_Result+="<style type='text/css'>.matrix td{text-align: center;line-height: 1.2em;padding: 0 1ex 0ex 1ex;}td.lbrak { width: 0.8ex;font-size: 50%;border: solid thin black;border-right: none;}td.rbrak { width: 0.8ex; font-size: 50%;border: solid thin black;border-left: none;}.matrixbrak td { line-height: 1.6; }</style>\n";

    VMHL_Result+="<p><b>"+TitleVector+":</b>";

    VMHL_Result+="<table>\n";
    VMHL_Result+="<tr>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<font style=\"text-decoration:overline;\">";
    VMHL_Result+=NameVector;
    VMHL_Result+="</font> = \n";
    VMHL_Result+="</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrixbrak\">\n";
    VMHL_Result+="<tr>\n";
    VMHL_Result+="<td class=\"lbrak\">&nbsp;</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrix\">\n";

    for (int i=0;i<VMHL_N;i++)
    {
        VMHL_Result+="<tr>\n";
        VMHL_Result+="<td><b><font color=\"#4200ff\">"+QString::number(VMHL_Vector[i])+"</font></b></td>\n";

        VMHL_Result+="</tr>\n";
    }

    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";
    VMHL_Result+="<td class=\"rbrak\">&nbsp;</td>\n";
    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";

    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table></p>\n";

    return VMHL_Result;
}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowVectorT (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector)
{
    /*
    Функция возвращает строку с выводом некотоого вектора VMHL_Vector в траснпонированном виде с HTML кодами. Для добавление в html файл.
    Входные параметры:
     VMHL_Vector - указатель на выводимый вектор;
     VMHL_N - количество элементов вектора;
     TitleVector - заголовок выводимого вектора;
     NameVector - обозначение вектора.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым вектором.
    */
    QString VMHL_Result;
    VMHL_Result+="<style type='text/css'>.matrix td{text-align: center;line-height: 1.2em;padding: 0 1ex 0ex 1ex;}td.lbrak { width: 0.8ex;font-size: 50%;border: solid thin black;border-right: none;}td.rbrak { width: 0.8ex; font-size: 50%;border: solid thin black;border-left: none;}.matrixbrak td { line-height: 1.6; }</style>\n";

    VMHL_Result+="<p><b>"+TitleVector+":</b>";

    VMHL_Result+="<table>\n";
    VMHL_Result+="<tr>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<font style=\"text-decoration:overline;\">";
    VMHL_Result+=NameVector;
    VMHL_Result+="</font> = \n";
    VMHL_Result+="</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrixbrak\">\n";
    VMHL_Result+="<tr>\n";
    VMHL_Result+="<td class=\"lbrak\">&nbsp;</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrix\">\n";

    VMHL_Result+="<tr>\n";
    for (int i=0;i<VMHL_N;i++)
        VMHL_Result+="<td><b><font color=\"#4200ff\">"+QString::number(VMHL_Vector[i])+"</font></b></td>\n";
    VMHL_Result+="</tr>\n";

    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";
    VMHL_Result+="<td class=\"rbrak\">&nbsp;</td>\n";
    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";
    VMHL_Result+="<td style=\"text-align:left;vertical-align:top;margin:5px;\">ᵀ<br>&nbsp;</td>\n";

    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table></p>\n";

    return VMHL_Result;
}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowMatrix (T *VMHL_Matrix, int VMHL_N, int VMHL_M, QString TitleMatrix, QString NameMatrix)
{
    /*
    Функция возвращает строку с выводом некоторой матрицы VMHL_Matrix с HTML кодами. Для добавление в html файл.
    Входные параметры:
     VMHL_Matrix - указатель на выводимую матрицу;
     VMHL_N - количество строк в матрице;
     VMHL_M - количество столбцов в матрице;
     TitleMatrix - заголовок выводимой матрицы;
     NameMatrix - обозначение матрицы.
    Возвращаемое значение:
     Отсутствует.
    */
    QString VMHL_Result;

    VMHL_Result+="<style type='text/css'>.matrix td{text-align: center;line-height: 1.2em;padding: 0 1ex 0ex 1ex;}td.lbrak { width: 0.8ex;font-size: 50%;border: solid thin black;border-right: none;}td.rbrak { width: 0.8ex; font-size: 50%;border: solid thin black;border-left: none;}.matrixbrak td { line-height: 1.6; }</style>\n";

    VMHL_Result+="<p><b>"+TitleMatrix+":</b>";

    VMHL_Result+="<table>\n";
    VMHL_Result+="<tr>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<font style=\"text-decoration:overline;\">";
    VMHL_Result+=NameMatrix;
    VMHL_Result+="</font> = \n";
    VMHL_Result+="</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrixbrak\">\n";
    VMHL_Result+="<tr>\n";
    VMHL_Result+="<td class=\"lbrak\">&nbsp;</td>\n";

    VMHL_Result+="<td>\n";
    VMHL_Result+="<table cellpadding=\"0\" cellspacing=\"0\" class=\"matrix\">\n";

    for (int i=0;i<VMHL_N;i++)
    {
        VMHL_Result+="<tr>\n";
        for (int j=0;j<VMHL_M;j++)
            VMHL_Result+="<td><b><font color=\"#4200ff\">"+QString::number(VMHL_Matrix[i][j])+"</font></b></td>\n";

        VMHL_Result+="</tr>\n";
    }

    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";
    VMHL_Result+="<td class=\"rbrak\">&nbsp;</td>\n";
    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table>\n";
    VMHL_Result+="</td>\n";

    VMHL_Result+="</tr>\n";
    VMHL_Result+="</table></p>\n";

    return VMHL_Result;
}
//---------------------------------------------------------------------------
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine, bool ShowLine=true, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine)
{
    /*
    Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY - указатель на вектор координат Y точек;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     NameLine - название первого графика (для легенды);
     ShowLine - показывать ли линию;
     ShowPoints - показывать ли точки;
     ShowArea - показывать ли закрашенную ошбласть под кривой;
     ShowSpecPoints - показывать ли специальные точки;
     RedLine - рисовать ли красную линию, или синию.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY=new double [N];
    dataX[0]=7;dataY[0]=6;
    dataX[1]=8;dataY[1]=4;
    dataX[2]=10;dataY[2]=7;
    dataX[3]=5;dataY[3]=12;
    dataX[4]=14;dataY[4]=4;
    dataX[5]=13;dataY[5]=8;

    Html += THQt_ShowChartOfLine (dataX,dataY,N,"Тестовый график","x","y","линия",true,true,true,true,false);

    delete []dataX;
    delete []dataY;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    QString VMHL_Result;//переменная итогового результата
    int i,j;

    //цвета
    QString Color="#97bbcd";
    QString HighlightColor="#3c7693";
    QString CoordinateColor="#88969c";
    QString RedColor="#ff0000";
    QString HighlightRedColor="#8b0909";

    //посчитаем гарницы изменения параметров
    T MinX=VMHL_VectorX[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorX[i]<MinX)
            MinX=VMHL_VectorX[i];

    T MinY=VMHL_VectorY[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY[i]<MinY)
            MinY=VMHL_VectorY[i];

    T MaxX=VMHL_VectorX[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorX[i]>MaxX)
            MaxX=VMHL_VectorX[i];

    T MaxY=VMHL_VectorY[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY[i]>MaxY)
            MaxY=VMHL_VectorY[i];

    T LengthX=MaxX-MinX;
    T LengthY=MaxY-MinY;

    //посчитаем область графика, в которой все будет рисоваться
    T LeftXBoundingBox=MinX-LengthX/10.;
    T LeftYBoundingBox=MinY-LengthY/5.;
    T RightXBoundingBox=MaxX+LengthX/5.;
    T RightYBoundingBox=MaxY+LengthY/5.;
    QString SLeftXBoundingBox=QString::number(LeftXBoundingBox);
    QString SLeftYBoundingBox=QString::number(LeftYBoundingBox);
    QString SRightXBoundingBox=QString::number(RightXBoundingBox);
    QString SRightYBoundingBox=QString::number(RightYBoundingBox);
    SLeftXBoundingBox.replace(',', '.');
    SLeftYBoundingBox.replace(',', '.');
    SRightXBoundingBox.replace(',', '.');
    SRightYBoundingBox.replace(',', '.');

    //посчитаем, где будем рисовать оси
    T BeginXAxis=MinX;
    T BeginYAxis=MinY;
    T UpXAxis=BeginXAxis+1.;
    T UpYAxis=BeginYAxis+1.;
    QString SBeginXAxis=QString::number(BeginXAxis);
    QString SBeginYAxis=QString::number(BeginYAxis);
    QString SUpXAxis=QString::number(UpXAxis);
    QString SUpYAxis=QString::number(UpYAxis);
    SUpXAxis.replace(',', '.');
    SUpYAxis.replace(',', '.');

    VMHL_Result+="<!--Вывод графика-->\n";

    if ((!(TitleChart.trimmed().isEmpty())))
        VMHL_Result+="<h2>"+TitleChart+"</h2>";

    //имена объектов в графике
    //QString UniqueName=HQt_UniqueNameOnlyNumbers();
    QString UniqueName=HQt_RandomString(6);
    QString NameBox="Box"+UniqueName;
    QString NameBoard="Board"+UniqueName;
    QString NameAxisX="AxisX"+UniqueName;
    QString NameAxisY="AxisY"+UniqueName;
    QString NameDataX="DataX"+UniqueName;
    QString NameDataY="DataY"+UniqueName;
    QString NameDataXArea="DataXArea"+UniqueName;
    QString NameDataYArea="DataYArea"+UniqueName;
    QString NameChart="Chart"+UniqueName;


    //рисуем область графика и оси
    VMHL_Result+="<div id=\""+NameBox+"\" class=\"jxgbox\" style=\"width:600px; height:300px;\"></div>\n";
    VMHL_Result+="<script type=\"text/javascript\">\n";
    VMHL_Result+="var "+NameBoard+" = JXG.JSXGraph.initBoard('"+NameBox+"', {boundingbox: ["+SLeftXBoundingBox+", "+SRightYBoundingBox+", "+SRightXBoundingBox+", "+SLeftYBoundingBox+"], axis:false,keepaspectratio: false,showcopyright: false,showNavigation: false, zoom: {wheel: true}});\n";
    VMHL_Result+="var "+NameAxisX+" = "+NameBoard+".create('axis', [["+SBeginXAxis+", "+SBeginYAxis+"], ["+SUpXAxis+", "+SBeginYAxis+"]],{withLabel: true, name: '"+NameVectorX+"',label: {position:'lft',offset:[10,-21]}});\n";
    VMHL_Result+="var "+NameAxisY+" = "+NameBoard+".create('axis', [["+SBeginXAxis+", "+SBeginYAxis+"], ["+SBeginXAxis+", "+SUpYAxis+"]],{withLabel: true, name: '"+NameVectorY+"',label: { position:'lrt',offset: [20,0]}});\n";

    //копируем во временный массив наши массивы, чтобы их не потревожить
    T *Temp_VMHL_VectorX=new T[VMHL_N];
    T *Temp_VMHL_VectorY=new T[VMHL_N];
    for (i=0;i<VMHL_N;i++) Temp_VMHL_VectorX[i]=VMHL_VectorX[i];
    for (i=0;i<VMHL_N;i++) Temp_VMHL_VectorY[i]=VMHL_VectorY[i];

    //отсортируем массивы
    for(i=VMHL_N-1;i>0;i--)
        for(j=0;j<i;j++)
            if(Temp_VMHL_VectorX[j]>Temp_VMHL_VectorX[j+1])
            {
                T x;
                x=Temp_VMHL_VectorX[j+1];
                Temp_VMHL_VectorX[j+1]=Temp_VMHL_VectorX[j];
                Temp_VMHL_VectorX[j]=x;
                x=Temp_VMHL_VectorY[j+1];
                Temp_VMHL_VectorY[j+1]=Temp_VMHL_VectorY[j];
                Temp_VMHL_VectorY[j]=x;
            }

    //соберем в массивы javascript данные точек
    QString SDataX;
    QString SDataY;
    for (i=0;i<VMHL_N-1;i++)
        SDataX+=QString::number(Temp_VMHL_VectorX[i])+", ";
    SDataX+=QString::number(Temp_VMHL_VectorX[VMHL_N-1]);
    for (i=0;i<VMHL_N-1;i++)
        SDataY+=QString::number(Temp_VMHL_VectorY[i])+", ";
    SDataY+=QString::number(Temp_VMHL_VectorY[VMHL_N-1]);

    //запишем массивы точек
    VMHL_Result+="var "+NameDataX+" = ["+SDataX+"];\n";
    VMHL_Result+="var "+NameDataY+" = ["+SDataY+"];\n";

    if (ShowArea)
    {
        //добавим точки для того, чтобы можно было закрасить спрошную область.

        SDataX=QString::number(MinX)+", "+SDataX+", "+QString::number(MaxX)+", "+QString::number(MinX);
        SDataY=SBeginYAxis+", "+SDataY+", "+SBeginYAxis+", "+SBeginYAxis;

        //нарисуем закрашенную область
        VMHL_Result+="var "+NameDataXArea+" = ["+SDataX+"];\n";
        VMHL_Result+="var "+NameDataYArea+" = ["+SDataY+"];\n";
        if (!RedLine)
            VMHL_Result+=NameBoard+".create('curve', ["+NameDataXArea+","+NameDataYArea+"],{strokeColor:'"+Color+"',highlightStrokeColor:'"+Color+"',strokeWidth:0,highlightStrokeWidth:0,dash:0, fillColor:'"+Color+"',highlightFillColor:'"+Color+"',fillOpacity:0.5,highlightFillOpacity:0.5});\n";
        else
            VMHL_Result+=NameBoard+".create('curve', ["+NameDataXArea+","+NameDataYArea+"],{strokeColor:'"+RedColor+"',highlightStrokeColor:'"+RedColor+"',strokeWidth:0,highlightStrokeWidth:0,dash:0, fillColor:'"+RedColor+"',highlightFillColor:'"+RedColor+"',fillOpacity:0.5,highlightFillOpacity:0.5});\n";
    }

    if ((ShowPoints)&&(ShowLine))
    {
        //Нарисуем график
        VMHL_Result+="var "+NameChart+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY+"], {chartStyle:'line,point'});\n";
        if (!RedLine)
            VMHL_Result+=NameChart+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
        else
            VMHL_Result+=NameChart+"[0].setProperty('strokeColor:"+RedColor+"','highlightStrokeColor:"+HighlightRedColor+"','strokeWidth:1');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        if (!RedLine)
            VMHL_Result+="    "+NameChart+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        else
            VMHL_Result+="    "+NameChart+"[1][i].setProperty({strokeColor:'"+RedColor+"',highlightStrokeColor:'"+HighlightRedColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'1pt'});\n";

        VMHL_Result+="    }\n";
    }

    if ((ShowPoints)&&(!ShowLine))
    {
        //Нарисуем график
        VMHL_Result+="var "+NameChart+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY+"], {chartStyle:'line,point'});\n";
        VMHL_Result+=NameChart+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:0');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        if (!RedLine)
            VMHL_Result+="    "+NameChart+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        else
            VMHL_Result+="    "+NameChart+"[1][i].setProperty({strokeColor:'"+RedColor+"',highlightStrokeColor:'"+HighlightRedColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'1pt'});\n";
        VMHL_Result+="    }\n";
    }

    if ((!ShowPoints)&&(ShowLine))
    {
        VMHL_Result+="var "+NameChart+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY+"], {chartStyle:'line'});\n";
        if (!RedLine)
            VMHL_Result+=NameChart+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
        else
            VMHL_Result+=NameChart+"[0].setProperty('strokeColor:"+RedColor+"','highlightStrokeColor:"+HighlightRedColor+"','strokeWidth:1');\n";
    }

    if (ShowSpecPoints)
    {
        //Теперь проставим точки
        //Нулевая точка
        VMHL_Result+=NameBoard+".create('point',["+SBeginXAxis+","+SBeginYAxis+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Min<sub>x</sub>="+SBeginXAxis+", Min<sub>y</sub>="+SBeginYAxis+"',label:{fontsize:10}});\n";
        //Максимальная по Y
        VMHL_Result+=NameBoard+".create('point',["+SBeginXAxis+","+QString::number(MaxY)+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Max<sub>y</sub>="+QString::number(MaxY)+"',label:{fontsize:10}});\n";
        //Максимальная по X
        VMHL_Result+=NameBoard+".create('point',["+QString::number(MaxX)+","+SBeginYAxis+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Max<sub>x</sub>="+QString::number(MaxX)+"',label:{fontsize:10}});\n";
    }

    VMHL_Result+="</script>\n";

    // ЛЕГЕНДА
    if ((!(NameLine.trimmed().isEmpty())))
    {
        //имена объектов в легенде
        QString UniqueNameLegend=HQt_RandomString(6);
        QString NameBoxNameLegend="BoxLegend"+UniqueNameLegend;
        QString NameBoardLegend="BoardLegend"+UniqueNameLegend;
        QString NameDataXLegend="DataXLegend"+UniqueNameLegend;
        QString NameDataYLegend="DataYLegend"+UniqueNameLegend;
        QString NameChartLegend="ChartLegend"+UniqueNameLegend;
        QString NameTextLegend="TextLegend"+UniqueName;

        //рисуем область графика и оси
        VMHL_Result+="<div id=\""+NameBoxNameLegend+"\" class=\"jxgbox\" style=\"width:600px; height:50px;\"></div>\n";
        VMHL_Result+="<script type=\"text/javascript\">\n";
        SLeftXBoundingBox="0";
        SRightYBoundingBox="2";
        SRightXBoundingBox="11.5";
        SLeftYBoundingBox="0";
        VMHL_Result+="var "+NameBoardLegend+" = JXG.JSXGraph.initBoard('"+NameBoxNameLegend+"', {boundingbox: ["+SLeftXBoundingBox+", "+SRightYBoundingBox+", "+SRightXBoundingBox+", "+SLeftYBoundingBox+"], axis:false,keepaspectratio: false,showcopyright: false,showNavigation: false, zoom: {wheel: false}});\n";

        //соберем в массивы javascript данные точек
        SDataX="1, 2";
        SDataY="1, 1";

        if ((ShowPoints)&&(!ShowLine))
        {
            //на одну точку больше
            SDataX="1, 1.5, 2";
            SDataY="1, 1, 1";
        }

        //запишем массивы точек
        VMHL_Result+="var "+NameDataXLegend+" = ["+SDataX+"];\n";
        VMHL_Result+="var "+NameDataYLegend+" = ["+SDataY+"];\n";

        if ((ShowPoints)&&(ShowLine))
        {
            //Нарисуем график
            VMHL_Result+="var "+NameChartLegend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataYLegend+"], {chartStyle:'line,point'});\n";
            if (!RedLine)
                VMHL_Result+=NameChartLegend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
            else
                VMHL_Result+=NameChartLegend+"[0].setProperty('strokeColor:"+RedColor+"','highlightStrokeColor:"+HighlightRedColor+"','strokeWidth:1');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(2)+";i++) \n";
            VMHL_Result+="    {\n";
            if (!RedLine)
                VMHL_Result+="    "+NameChartLegend+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            else
                VMHL_Result+="    "+NameChartLegend+"[1][i].setProperty({strokeColor:'"+RedColor+"',highlightStrokeColor:'"+HighlightRedColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'1pt'});\n";
            VMHL_Result+="    }\n";
        }
        if ((ShowPoints)&&(!ShowLine))
        {
            //Нарисуем точки
            VMHL_Result+="var "+NameChartLegend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataYLegend+"], {chartStyle:'line,point'});\n";
            VMHL_Result+=NameChartLegend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:0');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(3)+";i++) \n";
            VMHL_Result+="    {\n";
            if (!RedLine)
                VMHL_Result+="    "+NameChartLegend+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            else
                VMHL_Result+="    "+NameChartLegend+"[1][i].setProperty({strokeColor:'"+RedColor+"',highlightStrokeColor:'"+HighlightRedColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'1pt'});\n";
            VMHL_Result+="    }\n";
        }
        if ((!ShowPoints)&&(ShowLine))
        {
            //Нарисуем только линию
            VMHL_Result+="var "+NameChartLegend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataYLegend+"], {chartStyle:'line'});\n";
            if (!RedLine)
                VMHL_Result+=NameChartLegend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
            else
                VMHL_Result+=NameChartLegend+"[0].setProperty('strokeColor:"+RedColor+"','highlightStrokeColor:"+HighlightRedColor+"','strokeWidth:1');\n";
        }

        //напишем текст
        VMHL_Result+=NameTextLegend+" = "+NameBoardLegend+".create('text',[2.2,1, \"- "+NameLine+".\"], {display:'internal', anchorX:'left',frozen: true, strokeColor:'#000000',highlightStrokeColor:'#000000'});\n";

        VMHL_Result+="</script>\n";
    }

    delete [] Temp_VMHL_VectorX;
    delete [] Temp_VMHL_VectorY;

    return VMHL_Result;
}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine)
{
    /*
    Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается от основной функцией отсутствием параметра NameLine(название первого графика (для легенды)).
    То есть не будет легенды у графика.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY - указатель на вектор координат Y точек;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     ShowLine - показывать ли линию;
     ShowPoints - показывать ли точки;
     ShowArea - показывать ли закрашенную ошбласть под кривой;
     ShowSpecPoints - показывать ли специальные точки;
     RedLine - рисовать ли красную линию, или синию.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY=new double [N];
    dataX[0]=7;dataY[0]=6;
    dataX[1]=8;dataY[1]=4;
    dataX[2]=10;dataY[2]=7;
    dataX[3]=5;dataY[3]=12;
    dataX[4]=14;dataY[4]=4;
    dataX[5]=13;dataY[5]=8;

    Html += THQt_ShowChartOfLine (dataX,dataY,N,"Тестовый график","x","y",true,true,true,true);

    delete []dataX;
    delete []dataY;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowChartOfLine (VMHL_VectorX,VMHL_VectorY,VMHL_N,TitleChart,NameVectorX, NameVectorY, "", ShowLine, ShowPoints, ShowArea, ShowSpecPoints, RedLine);

}
//---------------------------------------------------------------------------
template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine)
{
    /*
    Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается от основной функцией отсутствием булевских параметров в конце - все по умолчанию делается.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY - указатель на вектор координат Y точек;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     NameLine - название первого графика (для легенды).
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY=new double [N];
    dataX[0]=7;dataY[0]=6;
    dataX[1]=8;dataY[1]=4;
    dataX[2]=10;dataY[2]=7;
    dataX[3]=5;dataY[3]=12;
    dataX[4]=14;dataY[4]=4;
    dataX[5]=13;dataY[5]=8;

    Html += THQt_ShowChartOfLine (dataX,dataY,N,"Тестовый график","x","y","линия");

    delete []dataX;
    delete []dataY;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowChartOfLine (VMHL_VectorX,VMHL_VectorY,VMHL_N,TitleChart,NameVectorX, NameVectorY, NameLine, true, true, true, true, false);

}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N)
{
    /*
    Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в html файл.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается от основной функцией отсутствием булевских параметров в конце и названий осей и графиков - для быстрого отображения графика без лишних телодвижений.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY - указатель на вектор координат Y точек;
     VMHL_N - количество точек.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY=new double [N];
    dataX[0]=7;dataY[0]=6;
    dataX[1]=8;dataY[1]=4;
    dataX[2]=10;dataY[2]=7;
    dataX[3]=5;dataY[3]=12;
    dataX[4]=14;dataY[4]=4;
    dataX[5]=13;dataY[5]=8;

    Html += THQt_ShowChartOfLine (dataX,dataY,N);

    delete []dataX;
    delete []dataY;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowChartOfLine (VMHL_VectorX,VMHL_VectorY,VMHL_N,"","x", "y", "", true, true, true, true, false);

}
//---------------------------------------------------------------------------

template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints)
{
    /*
    Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл.
    У обоих графиков одинаковый массив значений X.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY1 - указатель на вектор координат Y точек первой линии;
     VMHL_VectorY2 - указатель на вектор координат Y точек второй линии;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     NameLine1 - название первого графика (для легенды);
     NameLine2 - название второго графика (для легенды);
     ShowLine - показывать ли линию;
     ShowPoints - показывать ли точки;
     ShowArea - показывать ли закрашенную ошбласть под кривой;
     ShowSpecPoints - показывать ли специальные точки.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY1=new double [N];
    double *dataY2=new double [N];
    dataX[0]=7;dataY1[0]=6;dataY2[0]=1;
    dataX[1]=8;dataY1[1]=4;dataY2[0]=2;
    dataX[2]=10;dataY1[2]=7;dataY2[0]=3;
    dataX[3]=5;dataY1[3]=12;dataY2[0]=4;
    dataX[4]=14;dataY1[4]=4;dataY2[0]=4;
    dataX[5]=13;dataY1[5]=8;dataY2[0]=3;

    Html += THQt_ShowTwoChartsOfLine (dataX,dataY1,dataY2,N,"Тестовый график","x","y","количество деревьев","количество домов",true,true,true,true);

    delete []dataX;
    delete []dataY1;
    delete []dataY2;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    QString VMHL_Result;//переменная итогового результата
    int i,j;

    //цвета
    QString CoordinateColor="#88969c";

    QString Color="#97bbcd";
    QString HighlightColor="#3c7693";

    QString Color2="#cccccc";
    QString HighlightColor2="#7e7e7e";

    //посчитаем гарницы изменения параметров
    T MinX=VMHL_VectorX[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorX[i]<MinX)
            MinX=VMHL_VectorX[i];

    T MinY1=VMHL_VectorY1[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY1[i]<MinY1)
            MinY1=VMHL_VectorY1[i];

    T MinY2=VMHL_VectorY2[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY2[i]<MinY2)
            MinY2=VMHL_VectorY2[i];

    T MaxX=VMHL_VectorX[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorX[i]>MaxX)
            MaxX=VMHL_VectorX[i];

    T MaxY1=VMHL_VectorY1[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY1[i]>MaxY1)
            MaxY1=VMHL_VectorY1[i];

    T MaxY2=VMHL_VectorY2[0];
    for (int i=1;i<VMHL_N;i++)
        if (VMHL_VectorY2[i]>MaxY2)
            MaxY2=VMHL_VectorY2[i];

    T MinY;
    T MaxY;

    if (MinY1<MinY2)
        MinY=MinY1;
    else
        MinY=MinY2;

    if (MaxY1>MaxY2)
        MaxY=MaxY1;
    else
        MaxY=MaxY2;

    T LengthX=MaxX-MinX;
    T LengthY=MaxY-MinY;

    //посчитаем область графика, в которой все будет рисоваться
    T LeftXBoundingBox=MinX-LengthX/10.;
    T LeftYBoundingBox=MinY-LengthY/5.;
    T RightXBoundingBox=MaxX+LengthX/5.;
    T RightYBoundingBox=MaxY+LengthY/5.;
    QString SLeftXBoundingBox=QString::number(LeftXBoundingBox);
    QString SLeftYBoundingBox=QString::number(LeftYBoundingBox);
    QString SRightXBoundingBox=QString::number(RightXBoundingBox);
    QString SRightYBoundingBox=QString::number(RightYBoundingBox);
    SLeftXBoundingBox.replace(',', '.');
    SLeftYBoundingBox.replace(',', '.');
    SRightXBoundingBox.replace(',', '.');
    SRightYBoundingBox.replace(',', '.');

    //посчитаем, где будем рисовать оси
    T BeginXAxis=MinX;
    T BeginYAxis=MinY;
    T UpXAxis=BeginXAxis+1.;
    T UpYAxis=BeginYAxis+1.;
    QString SBeginXAxis=QString::number(BeginXAxis);
    QString SBeginYAxis=QString::number(BeginYAxis);
    QString SUpXAxis=QString::number(UpXAxis);
    QString SUpYAxis=QString::number(UpYAxis);
    SUpXAxis.replace(',', '.');
    SUpYAxis.replace(',', '.');

    VMHL_Result+="<!--Вывод графика-->\n";

    if ((!(TitleChart.trimmed().isEmpty())))
        VMHL_Result+="<h2>"+TitleChart+"</h2>";

    //имена объектов в графике
    QString UniqueName=HQt_RandomString(6);
    QString NameBox="Box"+UniqueName;
    QString NameBoard="Board"+UniqueName;
    QString NameAxisX="AxisX"+UniqueName;
    QString NameAxisY="AxisY"+UniqueName;
    QString NameDataX="DataX"+UniqueName;
    QString NameDataY1="DataY1"+UniqueName;
    QString NameDataY2="DataY2"+UniqueName;
    QString NameDataXArea="DataXArea"+UniqueName;
    QString NameDataY1Area="DataY1Area"+UniqueName;
    QString NameDataY2Area="DataY2Area"+UniqueName;
    QString NameChart1="Chart1"+UniqueName;
    QString NameChart2="Chart2"+UniqueName;

    //рисуем область графика и оси
    VMHL_Result+="<div id=\""+NameBox+"\" class=\"jxgbox\" style=\"width:600px; height:300px;\"></div>\n";
    VMHL_Result+="<script type=\"text/javascript\">\n";
    VMHL_Result+="var "+NameBoard+" = JXG.JSXGraph.initBoard('"+NameBox+"', {boundingbox: ["+SLeftXBoundingBox+", "+SRightYBoundingBox+", "+SRightXBoundingBox+", "+SLeftYBoundingBox+"], axis:false,keepaspectratio: false,showcopyright: false,showNavigation: false, zoom: {wheel: true}});\n";
    VMHL_Result+="var "+NameAxisX+" = "+NameBoard+".create('axis', [["+SBeginXAxis+", "+SBeginYAxis+"], ["+SUpXAxis+", "+SBeginYAxis+"]],{withLabel: true, name: '"+NameVectorX+"',label: {position:'lft',offset:[10,-21]}});\n";
    VMHL_Result+="var "+NameAxisY+" = "+NameBoard+".create('axis', [["+SBeginXAxis+", "+SBeginYAxis+"], ["+SBeginXAxis+", "+SUpYAxis+"]],{withLabel: true, name: '"+NameVectorY+"',label: { position:'lrt',offset: [20,0]}});\n";

    //копируем во временный массив наши массивы, чтобы их не потревожить
    T *Temp_VMHL_VectorX=new T[VMHL_N];
    T *Temp_VMHL_VectorY1=new T[VMHL_N];
    T *Temp_VMHL_VectorY2=new T[VMHL_N];
    for (i=0;i<VMHL_N;i++) Temp_VMHL_VectorX[i]=VMHL_VectorX[i];
    for (i=0;i<VMHL_N;i++) Temp_VMHL_VectorY1[i]=VMHL_VectorY1[i];
    for (i=0;i<VMHL_N;i++) Temp_VMHL_VectorY2[i]=VMHL_VectorY2[i];

    //отсортируем массивы
    for(i=VMHL_N-1;i>0;i--)
        for(j=0;j<i;j++)
            if(Temp_VMHL_VectorX[j]>Temp_VMHL_VectorX[j+1])
            {
                T x;
                x=Temp_VMHL_VectorX[j+1];
                Temp_VMHL_VectorX[j+1]=Temp_VMHL_VectorX[j];
                Temp_VMHL_VectorX[j]=x;
                x=Temp_VMHL_VectorY1[j+1];
                Temp_VMHL_VectorY1[j+1]=Temp_VMHL_VectorY1[j];
                Temp_VMHL_VectorY1[j]=x;
                x=Temp_VMHL_VectorY2[j+1];
                Temp_VMHL_VectorY2[j+1]=Temp_VMHL_VectorY2[j];
                Temp_VMHL_VectorY2[j]=x;
            }

    //соберем в массивы javascript данные точек
    QString SDataX;
    QString SDataY1;
    QString SDataY2;
    for (i=0;i<VMHL_N-1;i++)
        SDataX+=QString::number(Temp_VMHL_VectorX[i])+", ";
    SDataX+=QString::number(Temp_VMHL_VectorX[VMHL_N-1]);
    for (i=0;i<VMHL_N-1;i++)
        SDataY1+=QString::number(Temp_VMHL_VectorY1[i])+", ";
    SDataY1+=QString::number(Temp_VMHL_VectorY1[VMHL_N-1]);

    for (i=0;i<VMHL_N-1;i++)
        SDataY2+=QString::number(Temp_VMHL_VectorY2[i])+", ";
    SDataY2+=QString::number(Temp_VMHL_VectorY2[VMHL_N-1]);

    //запишем массивы точек
    VMHL_Result+="var "+NameDataX+" = ["+SDataX+"];\n";
    VMHL_Result+="var "+NameDataY1+" = ["+SDataY1+"];\n";
    VMHL_Result+="var "+NameDataY2+" = ["+SDataY2+"];\n";

    if (ShowArea)
    {
        //добавим точки для того, чтобы можно было закрасить спрошную область.

        SDataX=QString::number(MinX)+", "+SDataX+", "+QString::number(MaxX)+", "+QString::number(MinX);
        SDataY1=SBeginYAxis+", "+SDataY1+", "+SBeginYAxis+", "+SBeginYAxis;
        SDataY2=SBeginYAxis+", "+SDataY2+", "+SBeginYAxis+", "+SBeginYAxis;

        //нарисуем закрашенную область
        VMHL_Result+="var "+NameDataXArea+" = ["+SDataX+"];\n";
        VMHL_Result+="var "+NameDataY1Area+" = ["+SDataY1+"];\n";
        VMHL_Result+="var "+NameDataY2Area+" = ["+SDataY2+"];\n";
        VMHL_Result+=NameBoard+".create('curve', ["+NameDataXArea+","+NameDataY2Area+"],{strokeColor:'"+Color2+"',highlightStrokeColor:'"+Color2+"',strokeWidth:0,highlightStrokeWidth:0,dash:0, fillColor:'"+Color2+"',highlightFillColor:'"+Color2+"',fillOpacity:0.5,highlightFillOpacity:0.5});\n";
        VMHL_Result+=NameBoard+".create('curve', ["+NameDataXArea+","+NameDataY1Area+"],{strokeColor:'"+Color+"',highlightStrokeColor:'"+Color+"',strokeWidth:0,highlightStrokeWidth:0,dash:0, fillColor:'"+Color+"',highlightFillColor:'"+Color+"',fillOpacity:0.5,highlightFillOpacity:0.5});\n";
    }

    if ((ShowPoints)&&(ShowLine))
    {
        //Нарисуем график2
        VMHL_Result+="var "+NameChart2+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY2+"], {chartStyle:'line,point'});\n";
        VMHL_Result+=NameChart2+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:2');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        VMHL_Result+="    "+NameChart2+"[1][i].setProperty({strokeColor:'"+Color2+"',highlightStrokeColor:'"+HighlightColor2+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        VMHL_Result+="    }\n";

        //Нарисуем график
        VMHL_Result+="var "+NameChart1+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY1+"], {chartStyle:'line,point'});\n";
        VMHL_Result+=NameChart1+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        VMHL_Result+="    "+NameChart1+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        VMHL_Result+="    }\n";
    }

    if ((ShowPoints)&&(!ShowLine))
    {
        //Нарисуем точки2
        VMHL_Result+="var "+NameChart2+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY2+"], {chartStyle:'line,point'});\n";
        VMHL_Result+=NameChart2+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:0');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        VMHL_Result+="    "+NameChart2+"[1][i].setProperty({strokeColor:'"+Color2+"',highlightStrokeColor:'"+HighlightColor2+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        VMHL_Result+="    }\n";

        //Нарисуем точки
        VMHL_Result+="var "+NameChart1+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY1+"], {chartStyle:'line,point'});\n";
        VMHL_Result+=NameChart1+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:0');\n";
        VMHL_Result+="for(var i=0; i<"+QString::number(VMHL_N)+";i++) \n";
        VMHL_Result+="    {\n";
        VMHL_Result+="    "+NameChart1+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
        VMHL_Result+="    }\n";
    }

    if ((!ShowPoints)&&(ShowLine))
    {
        //Нарисуем только линию 2
        VMHL_Result+="var "+NameChart2+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY2+"], {chartStyle:'line'});\n";
        VMHL_Result+=NameChart2+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:2');\n";

        //Нарисуем только линию
        VMHL_Result+="var "+NameChart1+"= "+NameBoard+".createElement('chart', ["+NameDataX+","+NameDataY1+"], {chartStyle:'line'});\n";
        VMHL_Result+=NameChart1+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
    }

    if (ShowSpecPoints)
    {
        //Теперь проставим точки
        //Нулевая точка
        VMHL_Result+=NameBoard+".create('point',["+SBeginXAxis+","+SBeginYAxis+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Min<sub>x</sub>="+SBeginXAxis+", Min<sub>y</sub>="+SBeginYAxis+"',label:{fontsize:10}});\n";
        //Максимальная по Y
        VMHL_Result+=NameBoard+".create('point',["+SBeginXAxis+","+QString::number(MaxY)+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Max<sub>y</sub>="+QString::number(MaxY)+"',label:{fontsize:10}});\n";
        //Максимальная по X
        VMHL_Result+=NameBoard+".create('point',["+QString::number(MaxX)+","+SBeginYAxis+"], {strokeColor:'"+CoordinateColor+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',strokeWidth:'2pt',face:'o', size:1, name:'Max<sub>x</sub>="+QString::number(MaxX)+"',label:{fontsize:10}});\n";
    }

    VMHL_Result+="</script>\n";

    // ЛЕГЕНДА
    if ((!(NameLine1.trimmed().isEmpty()))&& (!(NameLine2.trimmed().isEmpty())))
    {
        //имена объектов в легенде
        QString UniqueNameLegend=HQt_RandomString(6);
        QString NameBoxNameLegend="BoxLegend"+UniqueNameLegend;
        QString NameBoardLegend="BoardLegend"+UniqueNameLegend;
        QString NameDataXLegend="DataXLegend"+UniqueNameLegend;
        QString NameDataY1Legend="DataY1Legend"+UniqueNameLegend;
        QString NameDataY2Legend="DataY2Legend"+UniqueNameLegend;
        QString NameChart1Legend="Chart1Legend"+UniqueNameLegend;
        QString NameChart2Legend="Chart2Legend"+UniqueNameLegend;
        QString NameText1Legend="Text1Legend"+UniqueName;
        QString NameText2Legend="Text2Legend"+UniqueName;


        //рисуем область графика и оси
        VMHL_Result+="<div id=\""+NameBoxNameLegend+"\" class=\"jxgbox\" style=\"width:600px; height:100px;\"></div>\n";
        VMHL_Result+="<script type=\"text/javascript\">\n";
        SLeftXBoundingBox="0";
        SRightYBoundingBox="3";
        SRightXBoundingBox="11.5";
        SLeftYBoundingBox="0";
        VMHL_Result+="var "+NameBoardLegend+" = JXG.JSXGraph.initBoard('"+NameBoxNameLegend+"', {boundingbox: ["+SLeftXBoundingBox+", "+SRightYBoundingBox+", "+SRightXBoundingBox+", "+SLeftYBoundingBox+"], axis:false,keepaspectratio: false,showcopyright: false,showNavigation: false, zoom: {wheel: false}});\n";

        //соберем в массивы javascript данные точек
        SDataX="1, 2";
        SDataY1="2, 2";
        SDataY2="1, 1";

        if ((ShowPoints)&&(!ShowLine))
        {
            //на одну точку больше
            SDataX="1, 1.5, 2";
            SDataY1="2, 2, 2";
            SDataY2="1, 1, 1";
        }

        //запишем массивы точек
        VMHL_Result+="var "+NameDataXLegend+" = ["+SDataX+"];\n";
        VMHL_Result+="var "+NameDataY1Legend+" = ["+SDataY1+"];\n";
        VMHL_Result+="var "+NameDataY2Legend+" = ["+SDataY2+"];\n";

        if ((ShowPoints)&&(ShowLine))
        {
            //Нарисуем график
            VMHL_Result+="var "+NameChart1Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY1Legend+"], {chartStyle:'line,point'});\n";
            VMHL_Result+=NameChart1Legend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(2)+";i++) \n";
            VMHL_Result+="    {\n";
            VMHL_Result+="    "+NameChart1Legend+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            VMHL_Result+="    }\n";

            //Нарисуем график2
            VMHL_Result+="var "+NameChart2Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY2Legend+"], {chartStyle:'line,point'});\n";
            VMHL_Result+=NameChart2Legend+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:2');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(2)+";i++) \n";
            VMHL_Result+="    {\n";
            VMHL_Result+="    "+NameChart2Legend+"[1][i].setProperty({strokeColor:'"+Color2+"',highlightStrokeColor:'"+HighlightColor2+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            VMHL_Result+="    }\n";
        }
        if ((ShowPoints)&&(!ShowLine))
        {
            //Нарисуем точки
            VMHL_Result+="var "+NameChart1Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY1Legend+"], {chartStyle:'line,point'});\n";
            VMHL_Result+=NameChart1Legend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:0');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(3)+";i++) \n";
            VMHL_Result+="    {\n";
            VMHL_Result+="    "+NameChart1Legend+"[1][i].setProperty({strokeColor:'"+Color+"',highlightStrokeColor:'"+HighlightColor+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            VMHL_Result+="    }\n";

            //Нарисуем точки2
            VMHL_Result+="var "+NameChart2Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY2Legend+"], {chartStyle:'line,point'});\n";
            VMHL_Result+=NameChart2Legend+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:0');\n";
            VMHL_Result+="for(var i=0; i<"+QString::number(3)+";i++) \n";
            VMHL_Result+="    {\n";
            VMHL_Result+="    "+NameChart2Legend+"[1][i].setProperty({strokeColor:'"+Color2+"',highlightStrokeColor:'"+HighlightColor2+"',fillColor:'white',highlightFillColor:'white',face:'o', size:2, strokeWidth:'2pt'});\n";
            VMHL_Result+="    }\n";
        }
        if ((!ShowPoints)&&(ShowLine))
        {
            //Нарисуем только линию
            VMHL_Result+="var "+NameChart1Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY1Legend+"], {chartStyle:'line'});\n";
            VMHL_Result+=NameChart1Legend+"[0].setProperty('strokeColor:"+Color+"','highlightStrokeColor:"+HighlightColor+"','strokeWidth:2');\n";

            //Нарисуем только линию 2
            VMHL_Result+="var "+NameChart2Legend+"= "+NameBoardLegend+".createElement('chart', ["+NameDataXLegend+","+NameDataY2Legend+"], {chartStyle:'line'});\n";
            VMHL_Result+=NameChart2Legend+"[0].setProperty('strokeColor:"+Color2+"','highlightStrokeColor:"+HighlightColor2+"','strokeWidth:2');\n";
        }

        //напишем текст
        VMHL_Result+=NameText1Legend+" = "+NameBoardLegend+".create('text',[2.2,2, \"- "+NameLine1+";\"], {display:'internal', anchorX:'left',frozen: true, strokeColor:'#000000',highlightStrokeColor:'#000000'});\n";
        VMHL_Result+=NameText2Legend+" = "+NameBoardLegend+".create('text',[2.2,1, \"- "+NameLine2+".\"], {display:'internal', anchorX:'left',frozen: true, strokeColor:'#000000',highlightStrokeColor:'#000000'});\n";

        VMHL_Result+="</script>\n";
    }

    delete [] Temp_VMHL_VectorX;
    delete [] Temp_VMHL_VectorY1;
    delete [] Temp_VMHL_VectorY2;

    return VMHL_Result;
}
//---------------------------------------------------------------------------
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints)
{
    /*
    Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл.
    У обоих графиков одинаковый массив значений X.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается отсуствием параметров NameLine1 и NameLine2. То есть нет легенды у графика.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY1 - указатель на вектор координат Y точек первой линии;
     VMHL_VectorY2 - указатель на вектор координат Y точек второй линии;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     ShowLine - показывать ли линию;
     ShowPoints - показывать ли точки;
     ShowArea - показывать ли закрашенную ошбласть под кривой;
     ShowSpecPoints - показывать ли специальные точки.
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY1=new double [N];
    double *dataY2=new double [N];
    dataX[0]=7;dataY1[0]=6;dataY2[0]=1;
    dataX[1]=8;dataY1[1]=4;dataY2[0]=2;
    dataX[2]=10;dataY1[2]=7;dataY2[0]=3;
    dataX[3]=5;dataY1[3]=12;dataY2[0]=4;
    dataX[4]=14;dataY1[4]=4;dataY2[0]=4;
    dataX[5]=13;dataY1[5]=8;dataY2[0]=3;

    Html += THQt_ShowTwoChartsOfLine (dataX,dataY1,dataY2,N,"Тестовый график","x","y",true,true,true,true);

    delete []dataX;
    delete []dataY1;
    delete []dataY2;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowTwoChartsOfLine (VMHL_VectorX,VMHL_VectorY1,VMHL_VectorY2, VMHL_N,TitleChart,NameVectorX, NameVectorY,"", "",ShowLine,ShowPoints,ShowArea, ShowSpecPoints);
}
//---------------------------------------------------------------------------
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2)
{
    /*
    Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл.
    У обоих графиков одинаковый массив значений X.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается от основной функции отсутствием булевских переменных - все по умолчанию.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY1 - указатель на вектор координат Y точек первой линии;
     VMHL_VectorY2 - указатель на вектор координат Y точек второй линии;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     NameLine1 - название первого графика (для легенды);
     NameLine2 - название второго графика (для легенды).
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY1=new double [N];
    double *dataY2=new double [N];
    dataX[0]=7;dataY1[0]=6;dataY2[0]=1;
    dataX[1]=8;dataY1[1]=4;dataY2[0]=2;
    dataX[2]=10;dataY1[2]=7;dataY2[0]=3;
    dataX[3]=5;dataY1[3]=12;dataY2[0]=4;
    dataX[4]=14;dataY1[4]=4;dataY2[0]=4;
    dataX[5]=13;dataY1[5]=8;dataY2[0]=3;

    Html += THQt_ShowTwoChartsOfLine (dataX,dataY1,dataY2,N,"Тестовый график","x","y","количество деревьев","количество домов");

    delete []dataX;
    delete []dataY1;
    delete []dataY2;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowTwoChartsOfLine (VMHL_VectorX,VMHL_VectorY1,VMHL_VectorY2, VMHL_N, TitleChart, NameVectorX, NameVectorY, NameLine1, NameLine2,true,true,true,true);

}
//---------------------------------------------------------------------------
template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N)
{
    /*
    Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в html файл.
    У обоих графиков одинаковый массив значений X.
    Требует наличия в папке с html файлом файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph.
    Отличается от основной функции отсутствием булевских переменных и названий графика, осей, линий - все по умолчанию.
    Входные параметры:
     VMHL_VectorX - указатель на вектор координат X точек;
     VMHL_VectorY1 - указатель на вектор координат Y точек первой линии;
     VMHL_VectorY2 - указатель на вектор координат Y точек второй линии;
     VMHL_N - количество точек;
     TitleChart - заголовок графика;
     NameVectorX - название оси Ox;
     NameVectorY - название оси Oy;
     NameLine1 - название первого графика (для легенды);
     NameLine2 - название второго графика (для легенды).
    Возвращаемое значение:
     Строка с HTML кодами с выводимым графиком.
    Примечание:
     Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
     Рекомендую так:
     qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
    Пример использования:

    ///////////////////////////////
    QString DS=QDir::separator();
    QString path=QGuiApplication::applicationDirPath()+DS;//путь к папке

    QString Html;
    Html=HQt_BeginHtml ();

    int N=6;
    double *dataX=new double [N];
    double *dataY1=new double [N];
    double *dataY2=new double [N];
    dataX[0]=7;dataY1[0]=6;dataY2[0]=1;
    dataX[1]=8;dataY1[1]=4;dataY2[0]=2;
    dataX[2]=10;dataY1[2]=7;dataY2[0]=3;
    dataX[3]=5;dataY1[3]=12;dataY2[0]=4;
    dataX[4]=14;dataY1[4]=4;dataY2[0]=4;
    dataX[5]=13;dataY1[5]=8;dataY2[0]=3;

    Html += THQt_ShowTwoChartsOfLine (dataX,dataY1,dataY2,N);

    delete []dataX;
    delete []dataY1;
    delete []dataY2;

    Html+=HQt_EndHtml();
    HQt_SaveFile(Html, path+"temp.html");
    ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));
    ///////////////////////////////
    */
    return THQt_ShowTwoChartsOfLine (VMHL_VectorX,VMHL_VectorY1,VMHL_VectorY2, VMHL_N, "", "x", "y", "", "",true,true,true,true);

}
//---------------------------------------------------------------------------
#endif // QTHARRIXLIBRARY_H
