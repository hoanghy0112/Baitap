#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int lc = a;
	if (lc > b)
		lc = b;
	cout << " Ket qua la: " << lc;
	return 0;
}