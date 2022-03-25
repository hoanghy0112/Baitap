#include<iostream>

using namespace std;

int main()
{
	float x;
	cin >> x;

	float x2 = x * x;
	float x6 = x2 * x2 * x2;
	float x13 = x6 * x6 * x;

	cout << "x^13 = " << x13;

	return 0;
}