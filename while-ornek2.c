#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int girilen_sayi=0;
	int toplam = 0;
	int i = 0;
	while (girilen_sayi!=-1)
	{
		cout << "lütfen bir sayı giriniz: ";
		cin >> girilen_sayi;
		toplam += girilen_sayi;
		i++;
	} 
	cout << "girilen " << i-1 << "sayının ortalaması :" << (toplam+1) / (i-1);
	cout << "\n";
	system("pause");
	return 0;
}