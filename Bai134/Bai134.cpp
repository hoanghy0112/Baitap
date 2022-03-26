#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x <= y && y <= z)
		cout << "Dang thuc dung ";
	else
		cout << "Dang thuc sai ";
		return 0;
}