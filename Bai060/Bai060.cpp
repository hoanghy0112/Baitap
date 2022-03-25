#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1;
	for (int i = n; i != 0; i = i / 10)
	{
		int dv = i % 10;;
		t = t * dv;
	}

	cout << "Tich cac chu so cua n la: " << t;

	return 0;
}