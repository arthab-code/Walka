#include <iostream>
#include "Postac.h"
#include "KreatorPostaci.h"
#include "PoleBitwy.h"
#include "WyswietlaczPostaci.h"
#include "Gra.h"

   Gra::Gra(){ iloscPostaci = 2; }

   int Gra::GetIloscPostaci() { return iloscPostaci; }

   void Gra::Start()
   {
    Postac p[iloscPostaci];
    KreatorPostaci kreatorPostaci;
    PoleBitwy poleBitwy;
    WyswietlaczPostaci wyswietlaczPostaci;

    cout << "Stworz " << iloscPostaci << " bohaterow : " << endl << endl;

    for (int i=0; i<iloscPostaci; i++)
    {
       p[i] = kreatorPostaci.StworzPostac(i+1);
    }

    for (int i=0; i<iloscPostaci; i++)
    {
       wyswietlaczPostaci.Wyswietl(p[i]);
    }

    cout << "\t POCZATEK WALKI (wcisnij enter aby rozpoczac walke): " << endl << endl;
    system("pause");

    poleBitwy.Walka(p[0],p[1]);
   }

