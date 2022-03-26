#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n%4==0&&n%100!=0) || n%4==0)
		cout << "Nam nhuan ";
	else
		cout << "Nam khong nhuan ";
		return 0;
}