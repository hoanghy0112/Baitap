#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s = 4-1/2-1/5-1/6;
	int i = 0;
	int e = 1;
	int t = 1; 
	while(e>=pow(10,-6))
	{
		t *= 16;
		e = 1 / t * (4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6));
		s += e;
		i++;
	}
	cout << "ket qua la: " << s;
	return 0;
}