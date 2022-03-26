#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = n; i <= 1; i -= 1)
	{
		s = sqrt(s + i);
	}

	cout << s;

	return 0;
}