#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int n, a, b, c, doi;
	cout << "nhap so nguyen n = "; cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = (n % 10);
	if (a<b) {
		doi = a;
		a = b;
		b = doi;
	}

	if (b<c) {
		doi = b;
		b = c;
		c = doi;
	}

	if (a<b) {
		doi = a;
		a = b;
		b = doi;
	}

	cout <<"so theo thu tu giam dan: "<< a << b << c <<"\n";
	system("pause");
}