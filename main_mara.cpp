#include "Header_mara.h"
#include <iostream>

using namespace std;

int x;
int v[10] = { 1, 2, 5, 3, 4, 5, 6, 3, 2, 9 };

int main() {
	cout << "\nPana la? ";
	cin >> x;
	cout << "\nDie Primzahlen sind: ";
	for (int i = 0; i < x; i++) {
		if (prim(i)==true) { cout << " " << i; }
	}
	x = teilfolge_1b(v, 10);
	cout << "\nPentru vectorul: ";
	for (int i = 0; i < 10; i++) {
		cout << " " << v[i];
	}
	cout << "\nCea mai lunga secventa este: " << x;
}