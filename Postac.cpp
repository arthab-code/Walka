#include "Gatunek.h"
#include "Postac.h"

    Postac::Postac(){}
    Postac::Postac(Gatunek _gatunekEnum, string _nazwa)
    {
        nazwa = _nazwa;

        switch (_gatunekEnum)
        {
        case Jaszczur:
            gatunek = "Jaszczur";
            hp = 70;
            moc = 3;
            break;

        case Waz:
            gatunek = "Waz";
            hp = 40;
            moc = 6;
            break;

        case Nosorozec:
            gatunek = "Nosorozec";
            hp = 100;
            moc = 3;
            break;
        }
    }

    int Postac::GetMoc()
    {
        return moc;
    }

    int Postac::GetHp()
    {
        return hp;
    }

    string Postac::GetNazwa()
    {
        return nazwa;
    }

    string Postac::GetGatunek()
    {
        return gatunek;
    }

    void Postac::ZmienHp(int ileObrazen)
    {
        hp -= ileObrazen;
    }
