#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "lütfen bir sayı giriniz: ";
	cin >> sayi;
	for (int i = 1; i < sayi; i++)
	{
		if (sayi%i != 0)
		{
			cout << "Girilen sayı asaldır.";
			break;
		}
		else
		{
			cout << "girilen sayı asal değildir.";
			break;
		}
			
	}
	cout << "\n";
	system("pause");
	return 0;
}
