#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 2; i <= n; i += 2)
		if (n % i == 0) s = s + i;

	cout << "Tong cac uoc chan cua n la: " << s;

	return 0;
}