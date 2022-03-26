#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		cout << "La so hoan thien ";
	else
		cout << "Khong la so hoan thien ";
	return 0;
}