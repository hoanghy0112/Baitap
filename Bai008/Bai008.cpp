#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	float r;
	cin >> r;
	int n;
	cin >> n;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu vi da giac deu la: " << p;

	return 0;
}