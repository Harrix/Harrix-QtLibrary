QString HQt_RandomRussianLetter()
{
    /*
        Функция генерирует случайную русскую букву в нижнем регистре.
        Входные параметры:
         Отсутствуют.
        Возвращаемое значение:
         Случайная русская буква.
        Примечание:
         Используются случайные числа, так что рекомендуется вызвать в программе иницилизатор случайных чисел qsrand.
         Рекомендую так:
         qsrand(QDateTime::currentMSecsSinceEpoch () % 1000000);
        */
    QString VHQt_Result;
    QString Alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";

    int randomNumber = qrand() % Alphabet.length();

    VHQt_Result = Alphabet.at(randomNumber);

    return VHQt_Result;
}