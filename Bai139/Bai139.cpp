#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a == 0)
		if (b == 0)
			cout << "VSN";
		else
			cout << "VN";
	else
		cout << "Ket qua la: " << -b / a;
	return 0;
}