#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= 2 * n + 1; i += 2)
		s = s + float(i) / (i + 1);

	cout << "Tong la: " << s;

	return 0;
}