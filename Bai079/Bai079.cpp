#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	int t = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * i;
		s = s + t * i;
	}

	cout << s;

	return 0;
}