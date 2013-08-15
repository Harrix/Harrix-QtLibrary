QtHarrixLibrary
=================

Сборник функций для Qt. Версия v.3.2.

https://github.com/Harrix/QtHarrixLibrary

Библиотека распространяется по лицензии Apache License, Version 2.0.

Функции
---------------

QString **HQt_ReadFile**(QString filename);  
Функция считывает текстовой файл в QString.

QStringList **HQt_ReadFileToQStringList**(QString filename);  
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

void **THQt_ReadColFromQStringList**(QStringList QStringListFromFile, int k, QString *VMHL_VectorResult);  
Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы.

int **HQt_CountOfColsFromQStringList**(QStringList QStringListFromFile);  
Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile);  
Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile, int k);  
Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile.

int **HQt_CountOfRowsFromQStringList**(QStringList QStringListFromFile, int *VMHL_ResultVector);  
Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.

QString **THQt_ThreeNumbersToRGBString**(int R, int G, int B);  
Функция переводит три числа в строку RGB типа #25ffb5, как в Photoshop или HTML.

void **THQt_RGBStringToThreeNumbers**(QString RGB, int *R, int *G, int *B);  
Функция переводит строку RGB типа #25ffb5 в три числа от 0 до 255, которые кодируют  цвета.

QString **THQt_GiveRainbowColorRGB**(double position);  
Функция выдает код RGB из градиента радуги для любой позиции от 0 до 1 из этого градиента.

QString **THQt_ColorFromGradient**(double position, QString FirstRGB, QString SecondRGB);  
Функция выдает код RGB из градиента от одного цвета FirstRGB к другому цвету SecondRGB согласно позиции от 0 до 1.

QString **THQt_AlphaBlendingColorToColor**(double alpha, QString FirstRGB, QString SecondRGB);  
Функция накладывает сверху на цвет другой цвет с определенной прозрачностью.

QString **HQt_TextBeforeEqualSign** (QString String);  
Функция возвращает текст строки до первого знака =.

QString **HQt_TextAfterEqualSign** (QString String);  
Функция возвращает текст строки после первого знака =.

QStringList HQt_AddUniqueQStringInQStringList (QStringList StringList, QString String);  
Функция добавляет в QStringList строку QString. Но если такая строка уже присутствует, то добавление не происходит.



История проекта
---------------

**[-]** исправление

**[+]** добавление

**[*]** разное

**3.2**

**[+]** Добавлена функция HQt_AddUniqueQStringInQStringList.

**3.1**

**[-]** Исправление в функциях по поиску разделителя между папками в полных именах файлах.

**3.0**

**[*]** Из библиотеки убраны функции (и сопутствующие файлы) для отображения информации в QWebView. Все эти функции перенесены в отдельную библиотеку QtHarrixLibraryForQWebView, которую можно найти по адресу: https://github.com/Harrix/QtHarrixLibraryForQWebView

**[+]** В библиотеке теперь 41  функция.

Контакты
---------------

Автор: Сергиенко Антон Борисович.

С автором можно связаться по адресу sergienkoanton@mail.ru или  http://vk.com/harrix .

Сайт автора, где публикуются последние новости: http://blog.harrix.org, а проекты располагаются по адресу http://harrix.org .