#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	if (abs(a - b) < c && c < a + b)
		cout << "la tam giac! ";
	else
		cout << "khong la tam giac! ";
	return 0;
}