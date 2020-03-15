#pragma once
#include <iostream>

using namespace std;

bool prim(int x) {
	int gef = true;
	for (int t = 2; t < x / 2; t++) {
		if (x % t == 0)
			gef = false;
	}
	if (x == 0 or x == 1 or x == 4) { gef = false; }
	return gef;
}

int wachsend(int* v, int n, int x) {
	int i = x;
	int anz = 0;
	if (v[i] < v[i + 1]) {
		while (v[i] < v[i + 1] and i < n - 1) {
			anz++;
			i++;
		}
	}
	if (x == n-1) { anz = 0; }
	return anz;
}

int teilfolge_1b(int* v, int n) {
	int sequenz = 0;
	int i = 0;
	while (i < n - 1) {
		int help = wachsend(v, n, i);
		if (sequenz < help) { sequenz = help; }
		i++;
		/* aici imi dadea infinit daca incercam sa sar peste secvente corecte dar prea scurte
		if (help == 0){i++;}
		else (i = help)
		*/
	}
	return sequenz;
}