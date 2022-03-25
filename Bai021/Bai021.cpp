#include<iostream>

using namespace std;

int main()
{
	float x;
	cin >> x;

	float x2 = x * x;
	float x3 = x2 * x;
	float x5 = x3 * x2;
	float x10 = x5 * x5;
	float x15 = x10 * x5;

	cout << "x^15 = " << x15;

	return 0;
}