#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool exist = false;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			exist = true;
	}

	if (exist)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";

	return 0;
}