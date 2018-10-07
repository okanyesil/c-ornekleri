#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "lütfen 1.sayıyı giriniz: ";
	cin >> sayi;
	int eb = sayi;
	for (int i = 2; i <= 3;i++)
	{
		if (sayi > eb)
			eb = sayi;
		cout << "lütfen 1.sayıyı giriniz: ";
		cin >> sayi;


	}
	cout << eb;
	cout << "\n";
	system("pause");
	return 0;
}