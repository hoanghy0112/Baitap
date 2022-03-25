#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	float s = 0;
	for (int i = 1; i <= 2 * n + 1; i += 2) 
		s = s + float(1) / i;

	cout << "Tong la: " << s;

	return 0;
}