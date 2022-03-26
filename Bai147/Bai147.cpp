#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 1;
	for (int t = n; t != 0; t /= 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
	}
	if (flag == 1)
		cout << "n toan so le ";
	else
		cout << "n toan so chan ";
	return 0;
}