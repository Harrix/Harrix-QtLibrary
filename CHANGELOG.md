HarrixQtLibrary
===============

3.31
----
 * Добавлены 2 функции. Теперь их 77.

3.30
----
 * В функциях поменялись названия некоторых переменных.

3.29
----
 * Исправлены функции HQt_StringFromLaTeX и HQt_StringForLaTeX.

3.28
----
 * Добавлена функция HQt_StringFromLaTeX.
 * Функций 75 штуки.

3.27
----
 * Исправлена функция HQt_StringForLaTeX.

3.26
----
 * Функций 74 штуки.
 * Добавлена версия функции HQt_CopyFile.

3.25
----
 * Функций 73 штуки.
 * Добавлена функция HQt_TryingReduceString.

3.24
----
 * Библиотека переведена в режим сборки из отдельных файлов путем программы HarrixMakeLibrary.exe
 * В связи с этим изменена немного структура библиотеки и описание функций.
 * Теперь будет осуществляться подсчет функций. Сейчас их 71 штук.
 * Исправлены и дописаны некоторые функции и справки к ним.

3.23
----
 * Добавлена функция удаления директории и всего, что там есть HQt_DirDelete.

3.22
----
 * Подправлено семейство функций HQt_BoolToWord.

3.21
----
 * Добавление семейства функций HQt_BoolToWord.

3.20
----
 * Удаление ненужного функционала.

3.19
----
 * Добавлена функция THQt_VectorToQStringList.

3.18
----
 * Добавлены функции HQt_NaturalCompareTwoQStrings и HQt_NaturalSortingQStringList для сортировки строк с учетом возможных чисел в них. Так называемая Natural sort.

3.17
----
 * Исправление и дополнение многих функций, где происходит работа с именами файлов и путей к ним.

3.16
----
 * Исправление опечаток.

3.15
----
 * Исправлена ошибка в функции HQt_RandomString.

3.14
----
 * Добавлена функция HQt_WriteTime для qint64.

3.13
----
 * Исправлены ошибки в некоторых функциях.

3.12
----
 * Переименование проекта из HarrixQtLibrary в HarrixQtLibrary.
 * Полная история перенесена в History.txt.
 * Изменен внешний вид README.md.

3.11
----
 * Добавлены функции HQt_DirExists, HQt_DirMake.

3.10
----
 * Добавлены функции HQt_MaxCountOfQStringList, HQt_IsNumeric, THQt_QStringToNumber (2 варианта).

3.9
---
 * Добавлены функции HQt_CutToWords, HQt_CutToWordsWithWordWrap, HQt_GetTypeCharEng, HQt_BreakdownOfTextWithWordWrap, HQt_CheckIntolerablePunctuation.
 * Дополнены некоторые функции в своем теле.

3.8
---
 * Добавлены функции HQt_GetTypeCharRus(QString x), HQt_CheckRus, HQt_CheckLetterFromWord.

3.7
---
 * Добавлены функции QString HQt_StringForLaTeX, HQt_StringToLabelForLaTeX, HQt_RenameFile.

3.6
---
 * Добавлена функция HQt_SearchQStringInQStringList.  

3.5
---
 * Удалены функции HQt_ReadNumberOfParametersFromHarrixOptimizationTesting, HQt_ReadNumberOfExperimentsFromHarrixOptimizationTesting и HQt_ReadNumberOfMeasuringFromHarrixOptimizationTesting ввиду перехода на класс HarrixClass_DataOfHarrixOptimizationTesting.

3.4
---
 * Добавлена функции HQt_ReadNumberOfParametersFromHarrixOptimizationTesting.

3.3
---
 * Добавлена функции HQt_ReadNumberOfExperimentsFromHarrixOptimizationTesting и HQt_ReadNumberOfMeasuringFromHarrixOptimizationTesting.

3.2
---
 * Добавлена функция HQt_AddUniqueQStringInQStringList.

3.1
---
 * Исправление в функциях по поиску разделителя между папками в полных именах файлах.

3.0
---
 * Из библиотеки убраны функции (и сопутствующие файлы) для отображения информации в QWebView. Все эти функции перенесены в отдельную библиотеку HarrixQtLibraryForQWebView, которую можно найти по адресу: https://github.com/Harrix/HarrixQtLibraryForQWebView
 * В библиотеке теперь 41  функция.