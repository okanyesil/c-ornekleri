#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	cout << "lütfen yaptığınız masai saatini giriniz:";
	int mesai;
	cin >> mesai;
	if (mesai <= 10)
	{
		cout << "almanız gereken ücret: " << mesai*5 << "\n";
	}
	else if (mesai<=20)
	{
		cout << "almanız gereken ücret: " << 50+(mesai-10)*3 << "\n";
	}
	else if (mesai>20)
	{
		cout << "almanız gereken ücret: " << 80 +(mesai-20)*2 << "\n";
	}
	system("pause");
	return 0;
}