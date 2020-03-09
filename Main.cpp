#define NDEBUG
#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;
bool prime(int a)
{
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
void dualprime()
{
	vector <int> v{ 8,9,2,84,7 };
	int s;
	s = v.size();
	for (int i = 0; i < s-1; i++)
	{
		if (prime(v[i] - v[i + 1]))
		{
			if (i + 1 != s)
				v.erase(v.end());
			else
				v.erase(v.begin());

		}
	}
}
int main()
{
	assert(prime(1) = 0);
	assert(pow(9) = 81);
	assert(dualprime() = { 8, 9, 2, 84 });
	return 0;
}