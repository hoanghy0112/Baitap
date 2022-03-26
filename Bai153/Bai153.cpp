#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 1;
	for (int t = n; t != 0; t /= 5)
		if (t % 5 != 0)
			flag = 0;
	if (flag == 1)
		cout << "n co dang 5^m ";
	else
		cout << "n khong co dang 5^m ";
	return 0;
}