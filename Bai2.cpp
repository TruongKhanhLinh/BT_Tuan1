#include <iostream>
using namespace std;

int kthoa(char S[])
{
	int i = 0, DEM = 0;
	while (S[i] != '\0')
	{
		if (S[i] >= 'A'&& S[i] <= 'Z') DEM++;
		i++;
	}
	return DEM;
}

int ktthuong(char S[])
{
	int j = 0, dem = 0;
	while (S[j] != '\0')
	{
		if (S[j] >= 'a'&& S[j] <= 'z') dem++;
		j++;
	}
	return dem;
}

int main()
{
	char S[100];
	cout << "nhap chuoi: ";
	cin.getline(S, 100);
	cout << "\nSo ky tu hoa la: " << kthoa(S);
	cout << "\nSo ky tu thuong la: " << ktthuong(S);
	cout << "\n\n";
	system("pause");
	return 0;
}