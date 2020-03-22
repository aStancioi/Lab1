#include <iostream>
//#include<vector>
#include "Vector.h"

using namespace std;

bool prime(int a)
{
	if (a < 0)
		a = -1 * a;
	if (a == 1)
		return 0;
	for (int i = 2; i <= a; i++)
	{
		if (a != 2 && a % i == 0)
			return 0;
	}
	return 1;
}
int pow(int a)
{
	int p = a * a;
	return p;
}
vector<int> teilfolge(vector<int> f)
{
	int ap = 0; //anfangspunkt der folge
	int ep = 0; //endpunkt der folge
	int apt = 0; //anfangspunkt der teilfolge
	int ept = 0; //endpunkt der teilfolge
	int maxlen = 0; //maximale laenge
	int clen = 0;
	int s, i;
	s = f.size();
	for (i = 0; i < s - 1; i++)
	{
		ap = i;
		while (prime(f[i] - f[i + 1]) and i < s - 1)
		{
			clen++;
			i++;
		}
		ep = i;
		if (clen >= maxlen)
		{
			maxlen = clen;
			apt = ap;
			ept = ep;
		}
	}
	if (ept != 0)
	{
		vector<int> tf(f[apt], f[ept]);
		return vector<int>(tf);
	}
	return vector<int>(f);
}