#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++) 
		s = s + float(1) / (i * (i + 1));

	cout << "Tong la: " << s;

	return 0;
}