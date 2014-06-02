QString HQt_TryingReduceString(QString text, int MaxSize)
{
    /*
    Функция старается сократить строку длиной больше MaxSize символов, сокращая слова.
    Входные параметры:
     text - сокращаемая строка;
     MaxSize - с какого количества символов сокращаем строку.
    Возвращаемое значение:
     Сокращенная строка. Обратите внмиание, что строка сокращенная может быть длиннее MaxSize.
*/
    QString Result;

    if (text.count()<=MaxSize)
    {
        Result = text;
    }
    else
    {
        QStringList list = HQt_CutToWords(text);
        QStringList listnew;
        for (int i=0;i<list.count();i++)
        {
            QString temp=list.at(i);
            if (temp.count()>5)
            {
                if (temp.count()<=7)
                    temp=temp.mid(0,3)+".";
                else
                    temp=temp.mid(0,5)+".";
            }
            listnew << temp;
        }
        Result =  listnew.join(' ');
    }

    return Result;
}
//---------------------------------------------------------------------------
QString HQt_TryingReduceString(QString text)
{
    /*
    Функция старается сократить строку длиной больше 40 символов, сокращая слова.
    Входные параметры:
     text - сокращаемая строка.
    Возвращаемое значение:
     Сокращенная строка. Обратите внмиание, что строка сокращенная может быть длиннее 40.
*/
    QString Result;

    if (text.count()<=40)
    {
        Result = text;
    }
    else
    {
        QStringList list = HQt_CutToWords(text);
        QStringList listnew;
        for (int i=0;i<list.count();i++)
        {
            QString temp=list.at(i);
            if (temp.count()>5)
            {
                if (temp.count()<=7)
                    temp=temp.mid(0,3)+".";
                else
                    temp=temp.mid(0,5)+".";
            }
            listnew << temp;
        }
        Result =  listnew.join(' ');
    }

    return Result;
}