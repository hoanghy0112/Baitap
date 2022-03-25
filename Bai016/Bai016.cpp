#include<iostream>

using namespace std;

int main()
{
	float x;
	cin >> x;

	float x3 = x * x * x;
	float x9 = x3 * x3 * x3;

	cout << "x^9 = " << x9;

	return 0;
}