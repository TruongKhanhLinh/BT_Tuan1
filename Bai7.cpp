#include <stdio.h>
#include <iostream>
using namespace std;

long ucln(long a, long b)
{
	long r;
	while (a%b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return b;
}

int main()
{
	long a, b;
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
	cout << "UCLN : " << ucln(a, b) << endl;
	cout << "BCNN : " << a*b / ucln(a, b) << endl;
	system("pause");
	return 0;
}