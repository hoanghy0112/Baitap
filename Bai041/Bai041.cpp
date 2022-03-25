#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++)
		s = s + i * (i + 1) * (i + 2);

	cout << "Ket qua la: " << s;

	return 0;
}