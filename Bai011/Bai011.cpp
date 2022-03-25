#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	float x1, x2, x3, y1, y2, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float ab = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float ac = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	float p = (ab + bc + ac) / 2;

	float s = sqrt(p * (p - ab) * (p - bc) * (p - ac));

	cout << "Dien tich tam giac la: " << s;

	return 0;
}