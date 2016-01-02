QString HQt_RussianLetter(int i)
{
    /*
        Функция генерирует русскую букву в нижнем регистре по номеру ее в алфавите.
        Входные параметры:
         i - номер буквы в русском алфавите (нумерация с нуля идет).
        Возвращаемое значение:
         Русская буква.
        */
    QString VHQt_Result;
    QString Alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";

    VHQt_Result = Alphabet.at(i);

    return VHQt_Result;
}