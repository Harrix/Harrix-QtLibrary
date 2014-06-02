QStringList HQt_BreakdownOfTextWithWordWrap(QString S, int length)
{
    /*
    Функция разбивает текст на строки длиной не более length. Если может, то ставит переносы.
    Входные параметры:
     S - проверяемая строка,
     length -  длина строки.
    Возвращаемое значение:
     Список строк, на которые разбивается текст.
    Примечание:
     Перевод слов производится по алгоритму П.Хpистова в модификации Дымченко и Ваpсанофьева.
    */
    QStringList VMHL_Result;

    QStringList Temp=HQt_CutToWordsWithWordWrap(S);

    QString F;
    QString now,after;
    int typenow, typeafter;
    QString Te;

    for (int i=0;i<Temp.count();i++)
    {
        if ((F+Temp.at(i)).length()<length)
        {
            F+=Temp.at(i);
        }
        else
        {

            if (i!=0)
            {
                after=Temp.at(i-1);
                now=Temp.at(i);
                typeafter=HQt_CheckLetterFromWord(after.at(after.length()-1));
                typenow=HQt_CheckLetterFromWord(now.at(0));

                if ((typeafter==typenow)&&(typeafter==1)) F+="-";

                bool dl=false;
                if (typeafter!=typenow)
                {
                    if (Temp.at(i).length()>length/3)
                    {
                        dl=true;
                        Te=F+Temp.at(i);
                        int mm;
                        QString nn;
                        if (typenow==1) mm=length-1;else mm=length;
                        if (typenow==1) nn="-";else nn="";
                        while (Te.length()>mm)
                        {
                            F=Te.mid(0,mm)+nn;
                            VMHL_Result << F;
                            Te=Te.mid(mm);
                        }
                        F=Te;
                    }

                }

                if (dl==false)
                {
                    VMHL_Result << F;
                    F.clear();
                    F=Temp.at(i);
                }


            }
            else
            {
                Te=F+Temp.at(i);
                while (Te.length()>length-1)
                {
                    F=Te.mid(0,length-1)+"-";
                    VMHL_Result << F;
                    Te=Te.mid(length-1);
                }
                F=Te;
            }

        }

    }

    if (F.length()!=0)
    {
        if (F.length()>length-1)
        {
            Te=F;
            while (Te.length()>length-1)
            {
                F=Te.mid(0,length-1)+"-";
                VMHL_Result << F;
                Te=Te.mid(length-1);
            }
            F=Te;
        }
        else
        {
            VMHL_Result << F;
        }
    }

    return VMHL_Result;
}