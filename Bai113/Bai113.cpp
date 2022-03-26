#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s = 0;
	int i = 1;
	int dau = 4;
	for (int e = 1; e >= pow(10, -6); e = dau / i)
	{
		s += e;
		dau = -dau;
		i += 2;
	}
	cout << "ket qua la: " << s;
	return 0;
}