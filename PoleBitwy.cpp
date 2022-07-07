#include "PoleBitwy.h"
#include <iostream>
#include <windows.h>

using namespace std;

   void PoleBitwy::Walka(Postac& p1, Postac& p2)
   {
      while (1)
      {
         p2.ZmienHp(p1.GetMoc());
         cout << "\t" << p2.GetNazwa() << " otrzymuje " << p1.GetMoc() << " obrazen, zostaje mu " << p2.GetHp() << " punktow zycia" << endl;

         Sleep(500);

         if (p2.GetHp() <= 0) break;

         p1.ZmienHp(p2.GetMoc());
         cout<< "\t" << p1.GetNazwa() << " otrzymuje " << p2.GetMoc() << " obrazen, zostaje mu " << p1.GetHp() << " punktow zycia"  << endl;
         cout << endl;

         Sleep(500);

         if (p1.GetHp() <= 0) break;
      }

      cout << endl << endl;

      Postac zwyciezca;

      if (p1.GetHp() > 0)
        zwyciezca = p1;
      else
        zwyciezca = p2;

      cout << "\t Walke wygrywa : " << zwyciezca.GetNazwa() << endl;
   }

