QStringList HQt_CutToWords(QString S)
{
    /*
    Функция разбивает строку на слова и те, части, между которыми они находятся. Слова с дефисом считаются за несколько слов.
    Входные параметры:
     S - разбиваемая строка.
    Возвращаемое значение:
     Список подстрок, на которые можно разбить слово.
    Примечание:
     Если кроме русского и английского языка у вас могут слова других языков, то дополните функцию HQt_CheckLetterFromWord.
    */
    QStringList VMHL_Result;

    QString F;

    int N=S.count();
    int type=-1;
    int typebefore=-1;
    int len=0;

    for (int i=0;i<N;i++)
    {
        if (i==N-1)
        {
            typebefore=type;
            type=int(HQt_CheckLetterFromWord(S.at(i)));
            if (type==typebefore)
            {
                F+=S.at(i);
                VMHL_Result<<F;
            }
            else
            {
                VMHL_Result<<F;
                F.clear();
                F=S.at(i);
                VMHL_Result<<F;
            }
        }
        else
        {
            if (i<=1)
            {
                if (i==0)
                {
                    F=S.at(i);
                    type=int(HQt_CheckLetterFromWord(S.at(i)));
                    len++;
                }
                if (i==1)
                {
                    typebefore=type;
                    type=int(HQt_CheckLetterFromWord(S.at(i)));
                    if (type==typebefore)
                    {
                        F+=S.at(i);
                        len++;
                    }
                    else
                    {
                        VMHL_Result<<F;
                        F.clear();
                        F=S.at(i);
                        len=1;
                    }
                }
            }
            else
            {
                typebefore=type;
                type=int(HQt_CheckLetterFromWord(S.at(i)));
                if (len==0)
                {
                    F+=S.at(i);
                    len++;
                }
                else
                {
                    if (type!=typebefore)
                    {
                        VMHL_Result<<F;
                        F.clear();
                        F=S.at(i);
                        len=1;
                    }
                    else
                    {
                        F+=S.at(i);
                        len++;
                    }
                }

            }

        }

    }

    return VMHL_Result;
}