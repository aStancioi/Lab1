bool prim(int x);
/*
	se verifica restul impartirii lui x cu alte numere si returneaza true daca este prim
*/

int wachsend(int* v, int n, int i);
/*
	aici am vrut sa incerc ceva 
	functia wachsend returneaza lungimea secventelor neintrerupte de numere crescatoare
	in functia teilfolge am incercat sa dau skip in vector la secventele mai mici decat cea mai mare gasita cu
	if ('functia returneaza 0') i++
	altfel i = valoarea secventei ajunse
	dar ramane in functie infinita si am remodificat pana am verificat de la fiecare index in parte cu tot cu zone moarte
*/
int teilfolge_1b(int* v, int n);
//returneaza cea mai lunga secventa dintr-un vector in functie de criteriul necesar