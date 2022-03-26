#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float D = b * b - 4 * a * c;
	if (a >= 0)
		if (D != 0)
		{
			float x1 = (-b - sqrt(D)) / (2 * a);
			float x2 = (-b + sqrt(D)) / (2 * a);
			cout << "Ket qua la: " << x1 << " " << x2;
		}
		else
			cout << "Ket qua la: " << -b / (2 * a);
	else
		cout << "VN";
	return 0;
}