QStringList HQt_CutToWordsWithWordWrap(QString S)
{
    /*
    Функция разбивает строку на слова и те, части, между которыми они находятся. А русские и английские слова разделяет по переносам. Слова с дефисом считаются за несколько слов.
    Входные параметры:
     S - разбиваемая строка.
    Возвращаемое значение:
     Список подстрок, на которые можно разбить слово.
    Примечание:
     Если кроме русского и английского языка у вас могут слова других языков, то дополните функцию HQt_CheckLetterFromWord.
    Примечание:
     Перевод слов производится по алгоритму П. Хpистова в модификации Дымченко и Ваpсанофьева.
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
                        if (len>=1)
                        {
                            bool cut=false;

                            //«Х-»
                            if ((i>=1)&&(i!=N-1))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-1))==3)&&(HQt_GetTypeCharRus(S.at(i))!=0)&&(HQt_GetTypeCharRus(S.at(i+1))!=0))
                                    cut=true;
                            }

                            //«Г-Г»
                            if ((i>=1)&&(i!=N-1))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-1))==1)&&(HQt_GetTypeCharRus(S.at(i))==1)&&(HQt_GetTypeCharRus(S.at(i+1))!=0))
                                    cut=true;
                            }

                            //«ГС-СГ»
                            if ((i>=2)&&(i<=N-2))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-2))==1)&&(HQt_GetTypeCharRus(S.at(i-1))==2)&&(HQt_GetTypeCharRus(S.at(i))==2)&&(HQt_GetTypeCharRus(S.at(i+1))==1))
                                    cut=true;
                            }

                            //«СГ-СГ»
                            if ((i>=2)&&(i<=N-2))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-2))==2)&&(HQt_GetTypeCharRus(S.at(i-1))==1)&&(HQt_GetTypeCharRus(S.at(i))==2)&&(HQt_GetTypeCharRus(S.at(i+1))==1))
                                    cut=true;
                            }

                            //«ГС-ССГ»
                            if ((i>=2)&&(i<=N-3))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-2))==1)&&(HQt_GetTypeCharRus(S.at(i-1))==2)&&(HQt_GetTypeCharRus(S.at(i))==2)&&(HQt_GetTypeCharRus(S.at(i+1))==2)&&(HQt_GetTypeCharRus(S.at(i+2))==1))
                                    cut=true;
                            }

                            //«ГСС-ССГ»
                            if ((i>=3)&&(i<=N-3))
                            {
                                if ((HQt_GetTypeCharRus(S.at(i-3))==1)&&(HQt_GetTypeCharRus(S.at(i-2))==2)&&(HQt_GetTypeCharRus(S.at(i-1))==2)&&(HQt_GetTypeCharRus(S.at(i))==2)&&(HQt_GetTypeCharRus(S.at(i+1))==2)&&(HQt_GetTypeCharRus(S.at(i+2))==1))
                                    cut=true;
                            }

                            //Для английского
                            //«Г-Г»
                            if ((i>=1)&&(i!=N-1))
                            {
                                if ((HQt_GetTypeCharEng(S.at(i-1))==1)&&(HQt_GetTypeCharEng(S.at(i))==1)&&(HQt_GetTypeCharEng(S.at(i+1))!=0))
                                    cut=true;
                            }

                            //«ГС-СГ»
                            if ((i>=2)&&(i<=N-2))
                            {
                                if ((HQt_GetTypeCharEng(S.at(i-2))==1)&&(HQt_GetTypeCharEng(S.at(i-1))==2)&&(HQt_GetTypeCharEng(S.at(i))==2)&&(HQt_GetTypeCharEng(S.at(i+1))==1))
                                    cut=true;
                            }

                            //«СГ-СГ»
                            if ((i>=2)&&(i<=N-2))
                            {
                                if ((HQt_GetTypeCharEng(S.at(i-2))==2)&&(HQt_GetTypeCharEng(S.at(i-1))==1)&&(HQt_GetTypeCharEng(S.at(i))==2)&&(HQt_GetTypeCharEng(S.at(i+1))==1))
                                    cut=true;
                            }

                            //«ГС-ССГ»
                            if ((i>=2)&&(i<=N-3))
                            {
                                if ((HQt_GetTypeCharEng(S.at(i-2))==1)&&(HQt_GetTypeCharEng(S.at(i-1))==2)&&(HQt_GetTypeCharEng(S.at(i))==2)&&(HQt_GetTypeCharEng(S.at(i+1))==2)&&(HQt_GetTypeCharEng(S.at(i+2))==1))
                                    cut=true;
                            }

                            //«ГСС-ССГ»
                            if ((i>=3)&&(i<=N-3))
                            {
                                if ((HQt_GetTypeCharEng(S.at(i-3))==1)&&(HQt_GetTypeCharEng(S.at(i-2))==2)&&(HQt_GetTypeCharEng(S.at(i-1))==2)&&(HQt_GetTypeCharEng(S.at(i))==2)&&(HQt_GetTypeCharEng(S.at(i+1))==2)&&(HQt_GetTypeCharEng(S.at(i+2))==1))
                                    cut=true;
                            }

                            if (cut==false)
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
                        else
                        {
                            F+=S.at(i);
                            len++;
                        }
                    }
                }

            }

        }

    }

    return VMHL_Result;
}