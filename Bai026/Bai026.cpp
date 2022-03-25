#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << " " << b;

	return 0;
}