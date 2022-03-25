#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	float r, n;
	cin >> r >> n;
	float s = 0.5 * n * r * r * sin(2 * 3.14 / n);

	cout << "Dien tich da giac deu la: " << s;

	return 0;
}