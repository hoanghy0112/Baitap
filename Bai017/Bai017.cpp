#include<iostream>

using namespace std;

int main()
{
	float x;
	cin >> x;

	float x2 = x * x;
	float x3 = x2 * x;
	float x4 = x2 * x2;
	float x11 = x4 * x4 * x3;

	cout << "x^11 = " << x11;

	return 0;
}