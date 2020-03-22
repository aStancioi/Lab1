#include "Header_mara.h"
#include <iostream>
#include "Vector.cpp"
#include <assert.h>
#include "Vector.h"

using namespace std;

int x;
int v[10] = { 1, 2, 5, 3, 4, 5, 6, 3, 2, 9 };

int main() {
	//ubung 1 - Mara
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
	
	//ubung 4 - Andrei
	assert(prime(1) = 0);
	assert(pow(9) = 81);
	assert(teilfolge({ 1,5,3,4,2,6,9 }) = { 5,3,4,2 });
	
	return 0;
}
