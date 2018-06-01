#include<iostream>
using namespace std;

int main()
{
	int m;
	int tien = 0;
	cout << "so m da di la: "; cin >> m;

	if (m <= 1000) {
		cout << "\nSo tien phai tra la 10.000 VND \n\n";
	}
	else{
		if ((1000<m) && (m <= 30000))  {
			tien = 10000 + (m - 1000)*7.5;
			cout << "So tien phai tra la: " << tien << "VND \n\n";
		}

		else
		{
			tien = 10000 + (m - 1000) * 8;
			cout << "So tien phai tra la: " << tien << "VND \n\n";
		}
	}

	system("pause");
	return 0;
}
