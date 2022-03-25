#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float x;
	cin >> x;
	float t = 1;
	for (int i = 1; i <= n; i++)\
		t = t * x;

	cout << "Tich la: " << t;

	return 0;
}