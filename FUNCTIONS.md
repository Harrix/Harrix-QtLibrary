Список функций библиотеки HarrixQtLibrary
=========================================

Обработка данных, считанных их файла
----------------

- Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.

```cpp
int HQt_CountOfColsFromQStringList(QStringList QStringListFromFile);
```

- Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile. Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile. Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.

```cpp
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile);
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int k);
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int *VMHL_ResultVector);
```

- Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы. Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы. Для строк.

```cpp
void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QDate *VMHL_VectorResult);
void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QString *VMHL_VectorResult);
```

- Функция считывает данные какого-то k столбца из QStringList в виде матрицы.

```cpp
template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VMHL_VectorResult);
```

- Функция считывает данные из QStringList в матрицу.

```cpp
template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T **VMHL_MatrixResult);
```

- Функция считывает данные из QStringList в два вектора.

```cpp
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, T *VMHL_VectorResult2);
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2);
```

- Функция считывает данные из QStringList в вектор.

```cpp
template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult);
```

Получение строк-выводов по данным
----------------

- Функция переводит переменную, принимающую значения "0" и "1" в слова.

```cpp
QString HQt_BoolToWord(QString Bool);
QString HQt_BoolToWord(QString Bool, QString No, QString Yes);
QString HQt_BoolToWord(bool Bool);
QString HQt_BoolToWord(bool Bool, QString No, QString Yes);
QString HQt_BoolToWord(int Bool);
QString HQt_BoolToWord(int Bool, QString No, QString Yes);
```

- Функция генерирует случайную строку из английских больших и малых букв.

```cpp
QString HQt_RandomString(int Length);
```

- Функция возвращает уникальную строку, которую можно использовать как некий идентификатор. Собирается из "HQt_" + текущее время или из BeginString+"_" + текущее время.

```cpp
QString HQt_UniqueName ();
QString HQt_UniqueName (QString BeginString);
```

- Функция возвращает уникальную строку, которую можно использовать как некий идентификатор. В строке только цифры. Собирается из текущего времени.

```cpp
QString HQt_UniqueNameOnlyNumbers ();
```

- Функция переводит миллисекунды в строку с описанием сколько это минут, секунд и др.

```cpp
QString HQt_WriteTime(int t);
QString HQt_WriteTime(qint64 t);
```

Работа с алфавитом и переносами
----------------

- Функция разбивает текст на строки длиной не более length. Если может, то ставит переносы.

```cpp
QStringList HQt_BreakdownOfTextWithWordWrap(QString S, int length);
```

- Является ли символом знаком пунктуации, который нельзя переносить.

```cpp
bool HQt_CheckIntolerablePunctuation(QString x);
```

- Является ли буква символом из слова. Считается, что это или латинские буквы, или русские, или цифры или нижнее подчеркивание. Плюc некоторые знаки препинания, так как их нельзя переносить.

```cpp
bool HQt_CheckLetterFromWord(QString x);
```

- Функция проверяет наличие русских букв в строке.

```cpp
bool HQt_CheckRus(QString S);
```

- Функция разбивает строку на слова и те, части, между которыми они находятся. Слова с дефисом считаются за несколько слов.

```cpp
QStringList HQt_CutToWords(QString S);
```

- Функция разбивает строку на слова и те, части, между которыми они находятся. А русские и английские слова разделяет по переносам. Слова с дефисом считаются за несколько слов.

```cpp
QStringList HQt_CutToWordsWithWordWrap(QString S);
```

- Функция выдает тип вводимого QString (считая, что это буква английская). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.

```cpp
int HQt_GetTypeCharEng(QString x);
```

- Функция выдает тип вводимого QString (считая, что это буква). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.

```cpp
int HQt_GetTypeCharRus(QString x);
```

Работа с датами
----------------

- Функция определяет сколько дней между двумя датами.

```cpp
int HQt_DaysBetweenDates(QDate BeginDate, QDate EndDate);
int HQt_DaysBetweenDates(QString BeginDate, QString EndDate);
```

Работа с файлами и папками
----------------

- Функция копирует файл filename в папку dir. Функция копирует файл filename в папку dir, с возможностью перезаписи (в функции-перегрузке).

```cpp
bool HQt_CopyFile(QString filename, QString dir);
bool HQt_CopyFile(QString filename, QString dir, bool overwrite);
```

- Функция удаляет директорию и всё ее содержимое.

```cpp
bool HQt_DirDelete(QString path);
```

- Функция проверяет существование директории.

```cpp
bool HQt_DirExists(QString path);
```

- Функция проверяет существование директории, и если ее нет, то создает.

```cpp
void HQt_DirMake(QString path);
```

- Функция проверяет существование файла.

```cpp
bool HQt_FileExists(QString filename);
```

- Функция получает расширение файла по его имени.

```cpp
QString HQt_GetExpFromFilename(QString filename);
```

- Функция получает имя файла по полному пути.

```cpp
QString HQt_GetFilenameFromFullFilename(QString filename);
```

- Функция получает имя файла без расширения по его имени.

```cpp
QString HQt_GetNameFromFilename(QString filename);
```

- Функция считывает список директорий в директории в QString.

```cpp
QString HQt_ListDirsInDir(QString path);
```

- Функция считывает список директорий в директории в QStringList..

```cpp
QStringList HQt_ListDirsInDirQStringList(QString path);
```

- Функция считывает список файлов (включая скрытые) в директории в QString.

```cpp
QString HQt_ListFilesInDir(QString path);
```

- Функция считывает список файлов (включая скрытые) в директории в QStringList.

```cpp
QStringList HQt_ListFilesInDirQStringList(QString path);
```

- Функция считывает текстовой файл в QString.

```cpp
QString HQt_ReadFile(QString filename);
```

- Функция считывает текстовой файл в QStringList.

```cpp
QStringList HQt_ReadFileToQStringList(QString filename);
```

- Функция переименовывает файл filename в newfilename.

```cpp
bool HQt_RenameFile(QString filename, QString newfilename);
```

- Функция сохраняет QString в текстовой файл.

```cpp
void HQt_SaveFile(QString line, QString filename);
```

Работа с цветом
----------------

- Функция накладывает сверху на цвет другой цвет с определенной прозрачностью.

```cpp
QString THQt_AlphaBlendingColorToColor(double alpha, QString FirstRGB, QString SecondRGB);
```

- Функция выдает код RGB из градиента от одного цвета FirstRGB к другому цвету SecondRGB согласно позиции от 0 до 1.

```cpp
QString THQt_ColorFromGradient(double position, QString FirstRGB, QString SecondRGB);
```

- Функция выдает код RGB из градиента радуги для любой позиции от 0 до 1 из этого градиента.

```cpp
QString THQt_GiveRainbowColorRGB(double position);
```

- Функция переводит строку RGB типа \#25ffb5 в три числа от 0 до 255, которые кодируют  цвета.

```cpp
void THQt_RGBStringToThreeNumbers(QString RGB, int *R, int *G, int *B);
```

- Функция переводит три числа в строку RGB типа \#25ffb5, как в Photoshop или HTML.

```cpp
QString THQt_ThreeNumbersToRGBString(int R, int G, int B);
```

Работа со строками и списками строк
----------------

- Функция добавляет в QStringList строку QString. Но если такая строка уже присутствует, то добавление не происходит.

```cpp
QStringList HQt_AddUniqueQStringInQStringList (QStringList StringList, QString String);
```

- Функция проверяет - является ли строка числом.

```cpp
bool HQt_IsNumeric(QString x);
```

- Функция выдает длину макимальной по длине строки в QStringList.

```cpp
int HQt_MaxCountOfQStringList(QStringList x);
```

- Функция сравнивает две строки и определяет какая строчка идет первой. Служебная функция для сортировки строк в обычном стиле, когда строки: z1, z10, z2 сортируются как z1, z2, z10.

```cpp
bool HQt_NaturalCompareTwoQStrings(const QString& s1,const QString& s2);
```

- Функция сортировки строк в сортировки строк QStringList в натуральном виде, например, строки: z1, z10, z2 сортируются как z1, z2, z10.

```cpp
QStringList HQt_NaturalSortingQStringList (QStringList StringList);
```

- Функция переводит QStringList в QString.

```cpp
QString HQt_QStringListToQString(QStringList lines);
```

- Функция выводит строку x в число.

```cpp
double HQt_QStringToNumber (QString x);
double HQt_QStringToNumber (QString x, bool checkcomma);
```

- Функция переводит QString в QStringList.

```cpp
QStringList HQt_QStringToQStringList(QString line);
```

- Функция ищет в QStringList строку QString (номер первого вхождения).

```cpp
int HQt_SearchQStringInQStringList (QStringList StringList, QString String);
```

- Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX.

```cpp
QString HQt_StringForLaTeX (QString String);
```

- Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX в виде label.

```cpp
QString HQt_StringToLabelForLaTeX (QString String);
```

- Функция возвращает текст строки после первого знака =.

```cpp
QString HQt_TextAfterEqualSign (QString String);
```

- Функция возвращает текст строки до первого знака =.

```cpp
QString HQt_TextBeforeEqualSign (QString String);
```

- Функция переводит вектор чисел в QStringList.

```cpp
template <class T> void THQt_VectorToQStringList(T *x, int N);
```

Служебные функции
----------------

- Функция делает задержку в MSecs миллисекунд.

```cpp
void HQt_Delay(int MSecs);
```

