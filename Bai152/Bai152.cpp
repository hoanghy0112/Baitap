#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 1;
	for (int t = n; t != 0; t /= 3)
		if (t % 3 != 0)
			flag = 0;
	if (flag == 1)
		cout << "n co dang 3^m ";
	else
		cout << "n khong co dang 3^m ";
	return 0;
}