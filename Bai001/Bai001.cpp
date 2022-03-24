#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;

	float y1;
	cout << "Nhap y1: ";
	cin >> y1;

	float x2;
	cout << "Nhap x2: ";
	cin >> x2;

	float y2;
	cout << "Nhap y2: ";
	cin >> y2;

	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << "Khoang cach la: " << d;

	return 0;
}