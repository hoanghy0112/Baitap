#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s = 3;
	int i = 1;
	int dau = 4;
	for (int e = 1/6; e >= pow(10, -6); e = dau / (i*(i+1)*(i+2)))
	{
		s += e;
		dau = -dau;
		i += 2;
	}
	cout << "ket qua la: " << s;
	return 0;
}