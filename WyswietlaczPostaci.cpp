#include "Postac.h"
#include "WyswietlaczPostaci.h"
#include <iostream>

using namespace std;

   void WyswietlaczPostaci::Wyswietl(Postac &p) const
   {
    cout << "\t Nazwa : "   << p.GetNazwa()   << endl;
    cout << "\t Gatunek : " << p.GetGatunek() << endl;
    cout << "\t HP : "      << p.GetHp()      << endl;
    cout << "\t MOC : "     << p.GetMoc()     << endl;
    cout << endl;
    cout << endl;
   }

