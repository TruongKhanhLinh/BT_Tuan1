#include<iostream>
using namespace std;

int main()
{
	int h; int q = 0;
	cout << "Nhap chieu cao tam giac h = ";
	cin >> h;

	while (h > 0)
	{
		for (int i = 1; i<h; i++)
			cout << " ";
		for (int k = 0; k <= q; k++)
			cout << "*";
		h--;
		q += 2;
		cout << "\n";
	}
	system("pause");
	return 0;
}