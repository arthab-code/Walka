#include <iostream>
#include "KreatorPostaci.h"
#include "Gatunek.h"

   Postac KreatorPostaci::StworzPostac(int nr)
   {
       string nazwa;
       short wybierzGatunek;
       Gatunek wybranyGatunek;

       cout << "Wybierz nazwe postaci numer [" << nr << "] \n";
       cin >> nazwa;

       do{

         cout << "Wybierz gatunek postaci numer [" << nr << "] \n[1]Jaszczur\n[2]Waz\n[3]Nosorozec\n";
         cin >> wybierzGatunek;

       if (wybierzGatunek > 3 || wybierzGatunek < 1)
          cout << "Nieprawidlowy numer gatunku, sprobuj ponownie\n\n";
       else
          break;

       }while(1);

       switch(wybierzGatunek)
       {
       case 1:
        wybranyGatunek = Jaszczur;
        break;

       case 2:
        wybranyGatunek = Waz;
        break;

       case 3:
        wybranyGatunek = Nosorozec;
        break;

       default:
        break;
       }

       Postac p(wybranyGatunek, nazwa);
       return p;
   }
