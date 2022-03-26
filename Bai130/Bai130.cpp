#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && z + x > y)
		cout << "la tam giac";
	else
		cout << "Khong la tam giac";
	return 0;
}