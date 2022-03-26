#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << " Ket qua la: " << a << " " << b;
	return 0;
}