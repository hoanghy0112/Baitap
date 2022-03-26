#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;;
	if (dem==2)
		cout << "La so nguyen to ";
	else
		cout << "Khong la so nguyen to ";
	return 0;
}