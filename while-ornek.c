#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi=0;
	int eb = 0;
	while (sayi!=-1)
	{
		cout << "lütfen bir sayı giriniz: ";
		cin >> sayi;
		if (sayi > eb)
			eb = sayi;
	}
	
	cout << eb;
	cout << "\n";
	system("pause");
	return 0;
}
