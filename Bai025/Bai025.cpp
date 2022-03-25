#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	float temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;

	return 0;
}