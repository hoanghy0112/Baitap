#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int t = n; t != 0; t /= 10)
		s += t % 10;

	cout << "Tong tat ca cac chu so cua n la: " << s;

	return 0;
}