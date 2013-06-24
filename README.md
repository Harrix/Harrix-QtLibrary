QtHarrixLibrary
=================

Сборник функций для Qt. Версия v.2.8.

https://github.com/Harrix/QtHarrixLibrary

Библиотека распространяется по лицензии Apache License, Version 2.0.

Функции
---------------

QString **HQt_ReadFile**(QString filename);  
Функция считывает текстовой файл в QString.

QStringList HQt_ReadFileToQStringList(QString filename);  
Функция считывает текстовой файл в QStringList.

void **HQt_SaveFile**(QString line, QString filename);  
Функция сохраняет QString в текстовой файл.

QString **HQt_ListFilesInDir**(QString path);  
Функция считывает список файлов (включая скрытые) в директории в QString.

QStringList **HQt_ListFilesInDirQStringList**(QString path);  
Функция считывает список файлов (включая скрытые) в директории в QStringList.

QString **HQt_ListDirsInDir**(QString path);  
Функция считывает список директорий в директории в QString.

QStringList **HQt_ListDirsInDirQStringList**(QString path);  
Функция считывает список директорий в директории в QStringList.

QString **HQt_GetExpFromFilename**(QString filename);  
Функция получает расширение файла по его имени.

QStringList **HQt_QStringToQStringList**(QString line);  
Функция переводит QString в QStringList.

QString **HQt_QStringListToQString**(QStringList lines);  
Функция переводит QStringList в QString.

bool **HQt_FileExists**(QString filename);  
Функция проверяет существование файла.

QString **HQt_GetNameFromFilename**(QString filename);  
Функция получает имя файла без расширения по его имени.

bool **HQt_CopyFile**(QString filename, QString dir);  
Функция копирует файл filename в папку dir.

bool **HQt_CopyFile**(QString filename, QString dir, bool overwrite);  
Функция копирует файл filename в папку dir, с возможностью перезаписи.

QString **HQt_GetFilenameFromFullFilename**(QString filename);  
Функция получает имя файла по полному пути.

QString **HQt_WriteTime**(int t)
Функция переводит миллисекунды в строку с описанием сколько это минут, секунд и др.

QString **HQt_UniqueName** ();
Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.

QString **HQt_UniqueName** (QString BeginString);  
Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.

QString **HQt_UniqueNameOnlyNumbers** ();  
Функция возвращает уникальную строку, которую можно использовать как некий идентификатор. В строке только цифры.

void **HQt_Delay**(int MSecs);  
Функция делает задержку в MSecs миллисекунд.

QString **HQt_RandomString**(int Length);  
Функция генерирует случайную строку из английских больших и малых букв.

int **HQt_DaysBetweenDates**(QDate BeginDate, QDate EndDate);  
Функция определяет сколько дней между двумя датами.

int **HQt_DaysBetweenDates**(QString BeginDate, QString EndDate);  
Функция определяет сколько дней между двумя датами.

template <class T> void **THQt_ReadVectorFromQStringList**(QStringList QStringListFromFile, T *VMHL_VectorResult);  
Функция считывает данные из QStringList в вектор.

template <class T> void **THQt_ReadTwoVectorFromQStringList**(QStringList QStringListFromFile, T *VMHL_VectorResult1, T *VMHL_VectorResult2);  
Функция считывает данные из QStringList в два вектора.

template <class T> void **THQt_ReadTwoVectorFromQStringList**(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2);  
Функция считывает данные из QStringList в два вектора (второй вектор - это даты).

template <class T> void **THQt_ReadMatrixFromQStringList**(QStringList QStringListFromFile, T **VMHL_MatrixResult);  
Функция считывает данные из QStringList в матрицу.

template <class T> void **THQt_ReadColFromQStringList**(QStringList QStringListFromFile, int k, T *VMHL_VectorResult);  
Функция считывает данные какого-то k столбца из QStringList в виде матрицы.

void **THQt_ReadColFromQStringList**(QStringList QStringListFromFile, int k, QDate *VMHL_VectorResult);  
Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы.

int **HQt_CountOfColsFromQStringList**(QStringList QStringListFromFile);  
Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile);  
Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile, int k);  
Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile, int *VMHL_ResultVector);  
Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.


Функции для получения HTML кода для вывода в webView
---------------

QString **HQt_BeginHtml** ();   
Функция возвращает строку с началом HTML файла, в который другими функциями добавляются иные данные.

QString **HQt_EndHtml** ();  
Функция возвращает строку с концовкой HTML файла, в который другими функциями добавляются иные данные.

template <class T> QString **THQt_NumberToText** (T VMHL_X);  
Функция выводит число VMHL_X в строку.

QString **HQt_ShowText** (QString TitleX);
Функция возвращает строку с выводом некоторой строки с HTML кодами. Для добавление в html файл.

template <class T> QString **THQt_ShowNumber** (T VMHL_X, QString TitleX, QString NameX);  
Функция возвращает строку с выводом некоторого числа VMHL_X с HTML кодами.

template <class T> QString **THQt_ShowVector** (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector);  
Функция возвращает строку с выводом некоторый вектора VMHL_Vector с HTML кодами.

template <class T> QString **THQt_ShowVectorT** (T *VMHL_Vector, int VMHL_N, QString TitleVector, QString NameVector);  
Функция возвращает строку с выводом некоторый вектора VMHL_Vector в транспонированном виде с HTML кодами.

template <class T> QString **THQt_ShowMatrix** (T *VMHL_Matrix, int VMHL_N, int VMHL_M, QString TitleMatrix, QString NameMatrix);  
Функция возвращает строку с выводом некоторой матрицы VMHL_Matrix с HTML кодами.

template <class T> QString **THQt_ShowChartOfLine** (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine);  
Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в HTML файл.

template <class T> QString **THQt_ShowChartOfLine** (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine);  
Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Для добавление в HTML файл. Отличается от основной функцией отсутствием параметра NameLine(название первого графика (для легенды)).

template <class T> QString **THQt_ShowChartOfLine** (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine);  
Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Отличается от основной функцией отсутствием булевских параметров в конце - все по умолчанию делается.

template <class T> QString **THQt_ShowChartOfLine** (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N);  
Функция возвращает строку с выводом некоторого графика по точкам с HTML кодами. Отличается от основной функцией отсутствием булевских параметров в конце и названий осей и графиков - для быстрого отображения графика без лишних телодвижений.

template <class T> QString **THQt_ShowTwoChartsOfLine** (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints);  
Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в HTML файл.

template <class T> QString **THQt_ShowTwoChartsOfLine** (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints);  
Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Отличается отсутствием параметров NameLine1 и NameLine2. То есть нет легенды у графика.

template <class T> QString **THQt_ShowTwoChartsOfLine** (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2);  
Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Для добавление в HTML файл. Отличается от основной функции отсутствием булевских переменных - все по умолчанию.

template <class T> QString **THQt_ShowTwoChartsOfLine** (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N);  
Функция возвращает строку с выводом некоторого двух графиков по точкам с HTML кодами. Отличается от основной функции отсутствием булевских переменных и названий графика, осей, линий - все по умолчанию.


Пример использования функция вывода в HTML файл
---------------
QString DS=QDir::separator();

QString path=QGuiApplication::applicationDirPath()+DS;
	
QString HTML;

HTML=HQt_BeginHtml (); 

HTML+=THQt_NumberToText (5); 

HTML+=HQt_EndHtml (); 

HQt_SaveFile(HTML, path+"temp.html");

ui->webView->setUrl(QUrl::fromLocalFile(path+"temp.html"));

История проекта
---------------

**[-]** исправление

**[+]** добавление

**[*]** разное

**2.8.**

**[+]** Добавлена функция int HQt_CountOfColsFromQStringList(QStringList QStringListFromFile).

**[+]** Добавлена функция int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile).

**[+]** Добавлена функция int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int k).

**[+]** Добавлена функция int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int *VMHL_ResultVector).

**[*]** Обновлены некоторые функции.

**[-]** Удалена функция int HQt_SizeMatrixOrVectorFromQStringList(QStringList QStringListFromFile, int* VMHL_Result_M);

**[-]** Удалена функция int HQt_SizeMatrixOrVectorFromQStringList(QStringList QStringListFromFile);

**2.7.**

**[*]** Обновлена функция template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine).

**[+]** Добавлена функция template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, bool ShowLine, bool ShowPoints, bool ShowArea, bool ShowSpecPoints, bool RedLine).

**[+]** Добавлена функция template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY, QString NameLine).

**[+]** Добавлена функция template <class T> QString THQt_ShowChartOfLine (T *VMHL_VectorX,T *VMHL_VectorY, int VMHL_N).

**[+]** Добавлена функция template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints).

**[+]** Добавлена функция template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,bool ShowLine,bool ShowPoints,bool ShowArea,bool ShowSpecPoints).

**[+]** Добавлена функция template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N, QString TitleChart, QString NameVectorX, QString NameVectorY,QString NameLine1, QString NameLine2).

**[+]** Добавлена функция template <class T> QString THQt_ShowTwoChartsOfLine (T *VMHL_VectorX,T *VMHL_VectorY1,T *VMHL_VectorY2, int VMHL_N).


**2.6.**

**[+]** Добавлена функция template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T **VMHL_MatrixResult).

**[+]** Добавлена функция template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VMHL_VectorResult).

**[+]** Добавлена функция void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QDate *VMHL_VectorResult).

**2.5.**

**[+]** Добавлена функция QStringList HQt_ReadFileToQStringList(QString filename); 

**[+]** Добавлена функция int HQt_SizeMatrixOrVectorFromQStringList(QStringList QStringListFromFile, int* VMHL_Result_M);

**[+]** Добавлена функция int HQt_SizeMatrixOrVectorFromQStringList(QStringList QStringListFromFile);

**[+]** Добавлена функция template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult); 

**[+]** Добавлена функция template <class T, class T2> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, T2 *VMHL_VectorResult2).

**[+]** Добавлена функция template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2).

**2.4.**

**[+]** Добавлена функция int HQt_DaysBetweenDates(QDate BeginDate, QDate EndDate).

**[+]** Добавлена функция-перезагрузка int HQt_DaysBetweenDates(QString BeginDate, QString EndDate).

**[*]** Обновлены некоторые функции.

**2.3.**

**[+]** Добавлена функция-перезагрузка QString HQt_UniqueName (QString BeginString).

**[+]** Добавлена функция для показа графиков THQt_ShowChartOfLine.

**[*]** Теперь с файлами библиотеки идут файлы jsxgraph.css и jsxgraphcore.js из библиотеки JSXGraph. Для показа графиков, например, функцией THQt_ShowChartOfLine.

**[+]** Добавлена функция HQt_UniqueNameOnlyNumbers.  

**[+]** Добавлена функция  для задержки HQt_Delay.

**[+]** Добавлена функция  HQt_RandomString.

**2.2.** 

**[+]** Добавлена функция QString HQt_UniqueName ();

**[+]** Добавлена функция QString HQt_BeginHtml (); 

**[+]** Добавлена функция QString HQt_EndHtml (); 

**[*]** Добавлен пример использования.

**2.1.**

**[+]** Добавлена функция QString HQt_ShowText (QString TitleX)

Контакты
---------------

Автор: Сергиенко Антон Борисович.

С автором можно связаться по адресу sergienkoanton@mail.ru или  http:  
vk.com/harrix .

Сайт автора, где публикуются последние новости: http:  
blog.harrix.org, а проекты располагаются по адресу http:  
harrix.org .