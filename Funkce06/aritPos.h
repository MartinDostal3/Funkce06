
#ifndef HLAVICKOVY_SOUBOR_H
#define HLAVICKOVY_SOUBOR_H
int aritmetickaPosloupnost(int n, int a1, int a2) {
	int d = a2 - a1;
	return a1 + (n - 1) * d;
}

int soucetPosloupnosti(int n, int a1, int a2) {
	int d = a2 - a1;
	double vysledek = (a1 + n) * (a1 + n) / 2;
	return vysledek;
}


#endif
