// Funkce06.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "aritPos.h"
using namespace std;




int main()
{
	cout << "zadany clen aritPos je: " << aritmetickaPosloupnost(5, 1, 3) << endl;
	cout << "soucet clenu je: " << soucetPosloupnosti(10, 1, 3) << endl;


	getchar();
	return 0;
}
