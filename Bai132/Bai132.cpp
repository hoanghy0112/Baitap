#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int xA, xB, xC, yA, yB, yC, yM, xM;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> yM >> xM;;
	float sABC = 0.5 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float sMAB = 0.5 * abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM);
	float sMBC = 0.5 * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float sMCA = 0.5 * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (sABC == sMAB + sMBC + sMCA)
		cout << "M thuoc tam giac! ";
	else
		cout << "M khong thuoc tam giac! ";
	return 0;
}