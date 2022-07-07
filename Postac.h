#ifndef POSTAC_H_INCLUDED
#define POSTAC_H_INCLUDED
#include <iostream>
#include "Gatunek.h"

using namespace std;

class Postac
{
    private:
    string gatunek;
    string nazwa;
    int moc;
    int hp;

    public:
    Postac();
    Postac(Gatunek _gatunekEnum, string _nazwa);
    int GetMoc();
    int GetHp();
    string GetNazwa();
    string GetGatunek();
    void ZmienHp(int ileObrazen);

};

#endif // POSTAC_H_INCLUDED
