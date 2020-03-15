#include <iostream>
#include <Vector.h>

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
	int ap = 0;
	int ep = 0;
	int apt = 0;
	int ept = 0;
	int maxlen = 0;
	int clen = 0;
	int s,i;
	s = f.size();
	for (i = 0; i < s - 1; i++)
	{
		ap = i
		while (prime(f[i] - f[i + 1]) and i < s - 1)
		{
			clen++;
			i++;
		}
		ep = i;
		if (clen >= maxlen)
		{
			apt = ap;
			ept = ep;
		}		
	}
	vector<int> tf(apt, ept);
	for (int x : tf)
		cout << x << "";
}

