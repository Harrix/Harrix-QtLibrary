HarrixQtLibrary
===============

Версия 3.23

Сборник функций для Qt.

[https://github.com/Harrix/HarrixQtLibrary](https://github.com/Harrix/HarrixQtLibrary)

Библиотека распространяется по лицензии [Apache License, Version 2.0](https://github.com/Harrix/HarrixQtLibrary/blob/master/LICENSE.txt).

Установка
---------

Подробно о установке с подробным примером можно прочитать тут [http://blog.harrix.org/?p=1186](http://blog.harrix.org/?p=1186).

Функции
-------

- Функция считывает текстовой файл в QString.

```
QString HQt_ReadFile(QString filename);  
```

- Функция считывает текстовой файл в QStringList.

```
QStringList HQt_ReadFileToQStringList(QString filename);  
```

- Функция сохраняет QString в текстовой файл.

```
void HQt_SaveFile(QString line, QString filename);
```  

- Функция считывает список файлов (включая скрытые) в директории в QString.

```
QString HQt_ListFilesInDir(QString path);  
```

- Функция считывает список файлов (включая скрытые) в директории в QStringList.

```
QStringList HQt_ListFilesInDirQStringList(QString path);  
```

- Функция считывает список директорий в директории в QString.

```
QString HQt_ListDirsInDir(QString path);  
```

- Функция считывает список директорий в директории в QStringList.

```
QStringList HQt_ListDirsInDirQStringList(QString path);  
```

- Функция получает расширение файла по его имени.

```
QString HQt_GetExpFromFilename(QString filename);  
```

- Функция переводит QString в QStringList.

```
QStringList HQt_QStringToQStringList(QString line);  
```

- Функция переводит QStringList в QString.

```
QString HQt_QStringListToQString(QStringList lines);
```  

- Функция проверяет существование файла.

```
bool HQt_FileExists(QString filename);  
```

- Функция проверяет существование директории.

```
bool HQt_DirExists(QString path);  
```

- Функция проверяет существование директории, и если ее нет, то создает.

```
void HQt_DirMake(QString path);  
```

- Функция удаляет директорию и всё ее содержимое.

```
bool HQt_DirDelete(QString path);
```

- Функция получает имя файла без расширения по его имени.

```
QString HQt_GetNameFromFilename(QString filename); 
``` 

- Функция копирует файл filename в папку dir.

```
bool HQt_CopyFile(QString filename, QString dir);  
```

- Функция копирует файл filename в папку dir, с возможностью перезаписи.

```
bool HQt_CopyFile(QString filename, QString dir, bool overwrite);
```  

- Функция переименовывает файл filename в newfilename.

```
bool HQt_RenameFile(QString filename, QString newfilename);  
```

- Функция получает имя файла по полному пути.

```
QString HQt_GetFilenameFromFullFilename(QString filename);  
```

- Функция переводит миллисекунды в строку с описанием сколько это минут, секунд и др.

```
QString HQt_WriteTime(int t);
```
		
- Функция переводит миллисекунды в строку с описанием сколько это минут, секунд и др.

```
QString HQt_WriteTime(qint64 t);
```

- Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.

```
QString HQt_UniqueName ();
```

- Функция возвращает уникальную строку, которую можно использовать как некий идентификатор.

```
QString HQt_UniqueName (QString BeginString); 
``` 

- Функция возвращает уникальную строку, которую можно использовать как некий идентификатор. В строке только цифры.

```
QString HQt_UniqueNameOnlyNumbers ();  
```

- Функция делает задержку в MSecs миллисекунд.

```
void HQt_Delay(int MSecs); 
``` 

- Функция генерирует случайную строку из английских больших и малых букв.

```
QString HQt_RandomString(int Length);  
```

- Функция определяет сколько дней между двумя датами.

```
int HQt_DaysBetweenDates(QDate BeginDate, QDate EndDate);  
```

- Функция определяет сколько дней между двумя датами.

```
int HQt_DaysBetweenDates(QString BeginDate, QString EndDate);  
```

- Функция считывает данные из QStringList в вектор.

```
template <class T> void THQt_ReadVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult);  
```

- Функция считывает данные из QStringList в два вектора.

```
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, T *VMHL_VectorResult2);  
```

- Функция считывает данные из QStringList в два вектора (второй вектор - это даты).

```
template <class T> void THQt_ReadTwoVectorFromQStringList(QStringList QStringListFromFile, T *VMHL_VectorResult1, QDate *VMHL_VectorResult2);  
```

- Функция считывает данные из QStringList в матрицу.

```
template <class T> void THQt_ReadMatrixFromQStringList(QStringList QStringListFromFile, T VMHL_MatrixResult);  
```

- Функция считывает данные какого-то k столбца из QStringList в виде матрицы.

```
template <class T> void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, T *VMHL_VectorResult);  
```

- Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы.

```
void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QDate *VMHL_VectorResult);  
```

- Функция считывает данные какого-то k столбца с датами из QStringList в виде матрицы.

```
void THQt_ReadColFromQStringList(QStringList QStringListFromFile, int k, QString *VMHL_VectorResult);  
```

- Функция подсчитывает сколько столбцов в текстовом файле, который скопировали в QStringListFromFile.

```
int HQt_CountOfColsFromQStringList(QStringList QStringListFromFile);  
```

- Функция подсчитывает сколько строк в текстовом файле, который скопировали в QStringListFromFile.

```
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile);
```  

- Функция подсчитывает сколько строк в k столбце из текстового файла, который скопировали в QStringListFromFile.

```
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int k);  
```

- Функция подсчитывает сколько строк в каждом столбце из текстового файла с матрицей, который скопировали в QStringListFromFile.

```
int HQt_CountOfRowsFromQStringList(QStringList QStringListFromFile, int *VMHL_ResultVector);  
```

- Функция переводит три числа в строку RGB типа #25ffb5, как в Photoshop или HTML.

```
QString THQt_ThreeNumbersToRGBString(int R, int G, int B);  
```

- Функция переводит строку RGB типа #25ffb5 в три числа от 0 до 255, которые кодируют  цвета.

```
void THQt_RGBStringToThreeNumbers(QString RGB, int *R, int *G, int *B);  
```

- Функция выдает код RGB из градиента радуги для любой позиции от 0 до 1 из этого градиента.

```
QString THQt_GiveRainbowColorRGB(double position);  
```

- Функция выдает код RGB из градиента от одного цвета FirstRGB к другому цвету SecondRGB согласно позиции от 0 до 1.

```
QString THQt_ColorFromGradient(double position, QString FirstRGB, QString SecondRGB);
```  

- Функция накладывает сверху на цвет другой цвет с определенной прозрачностью.

```
QString THQt_AlphaBlendingColorToColor(double alpha, QString FirstRGB, QString SecondRGB); 
``` 

- Функция возвращает текст строки до первого знака =.

```
QString HQt_TextBeforeEqualSign (QString String);  
```

- Функция возвращает текст строки после первого знака =.

```
QString HQt_TextAfterEqualSign (QString String);  
```

- Функция добавляет в QStringList строку QString. Но если такая строка уже присутствует, то добавление не происходит.

```
QStringList HQt_AddUniqueQStringInQStringList (QStringList StringList, QString String);  
```

- Функция ищет в QStringList строку QString (номер первого вхождения).

```
int HQt_SearchQStringInQStringList (QStringList StringList, QString String);
```  

- Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX.

```
QString HQt_StringForLaTeX (QString String);  
```

- Функция обрабатывает строку String так, чтобы она подходила для публикации в LaTeX в виде label.

```
QString HQt_StringToLabelForLaTeX (QString String);  
```

- Функция выдает тип вводимого QString (считая, что это буква). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.

```
int HQt_GetTypeCharRus(QString x);  
```

- Функция проверяет наличие русских букв в строке.

```
bool HQt_CheckRus(QString S);  
```

- Является ли буква символом из слова. Считается, что это или латинские буквы, или русские, или цифры или нижнее подчеркивание.

```
bool HQt_CheckLetterFromWord(QString x);  
```

- Функция разбивает строку на слова и те, части, между которыми они находятся. Слова с дефисом считаются за несколько слов.

```
QStringList HQt_CutToWords(QString S);  
```

- Функция разбивает строку на слова и те, части, между которыми они находятся. А русские и английские слова разделяет по переносам. Слова с дефисом считаются за несколько слов.

```
QStringList HQt_CutToWordsWithWordWrap(QString S);  
```

- Функция выдает тип вводимого QString (считая, что это буква английская). Нужно для алгоритма переноса строк П.Хpистова в модификации Дымченко и Ваpсанофьева.

```
int HQt_GetTypeCharEng(QString x);  
```

- Функция разбивает текст на строки длиной не более length. Если может, то ставит переносы.

```
QStringList HQt_BreakdownOfTextWithWordWrap(QString S, int length);  
```

- Является ли символом знаком пунктуации, который нельзя переносить.

```
bool HQt_CheckIntolerablePunctuation(QString x);  
```

- Функция выдает длину максимальной по длине строки в QStringList.

```
int HQt_MaxCountOfQStringList(QStringList x);  
```

- Функция проверяет - является ли строка числом.

```
bool HQt_IsNumeric(QString x);  
```

- Функция выводит строку x в число.

```
double THQt_QStringToNumber (QString x);  
```

- Функция выводит строку x в число с учетом возможности нахождения запятой.

```
double THQt_QStringToNumber (QString x, bool checkcomma); 
```
		
- Функция сравнивает две строки и определяет какая строчка идет первой. Служебная функция для сортировки строк в обычном стиле, когда строки: z1, z10, z2 сортируются как z1, z2, z10.

```
bool HQt_NaturalCompareTwoQStrings(const QString& s1,const QString& s2);
```

- Функция сортировки строк в сортировки строк QStringList в натуральном виде, например, строки: z1, z10, z2 сортируются как z1, z2, z10.

```
QStringList HQt_NaturalSortingQStringList (QStringList StringList);
```

- Функция переводит вектор чисел в QStringList.

```
template <class T> void THQt_VectorToQStringList(T *x, int N);
```

- Функция переводит переменную, принимающую значения "0" и "1" в слова.

```
QString HQt_BoolToWord(QString Bool);
QString HQt_BoolToWord(QString Bool, QString No, QString Yes);
QString HQt_BoolToWord(bool Bool);
QString HQt_BoolToWord(bool Bool, QString No, QString Yes);
QString HQt_BoolToWord(int Bool);
QString HQt_BoolToWord(int Bool, QString No, QString Yes);
```

Скриншоты примеров использования функций
----------------------------------------

![alt text](https://raw.github.com/Harrix/HarrixQtLibrary/master/images/example.png "Пример применения функции переноса текста")

Использованные технологии
-------------------------

- [Qt](http://qt-project.org/).

История проекта
---------------

Подробный список изменений в файле [CHANGELOG.md](https://github.com/Harrix/HarrixQtLibrary/blob/master/CHANGELOG.md).

Контакты
--------

Автор: Сергиенко Антон Борисович.

С автором можно связаться по адресу [sergienkoanton@mail.ru](mailto:sergienkoanton@mail.ru) или  [http://vk.com/harrix](http://vk.com/harrix).

Сайт автора, где публикуются последние новости: [http://blog.harrix.org](http://blog.harrix.org), а проекты располагаются по адресу: [http://harrix.org](http://harrix.org).