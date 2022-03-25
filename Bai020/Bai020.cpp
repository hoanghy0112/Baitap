#include<iostream>

using namespace std;

int main()
{
	float x;
	cin >> x;

	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x14 = x6 * x6 * x2;

	cout << "x^14 = " << x14;

	return 0;
}