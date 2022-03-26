#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	cout << "Ket qua la: " << dt;
	return 0;
}