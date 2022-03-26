#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (abs(x - y) > z && z < y + x)
		if (x * x + y * y == z * z || x * x == y * y + z * z || x * x + z * z == y * y)
			cout << "la tam giac vuong";
		else
			if (x == y || y == z || z == x)
				if (x == y && y == z)
					cout << "la tam giac deu ";
				else;
			else cout << "la tam giac thuong ";
	else 
		cout << "Khong la tam giac";
		return 0;
}