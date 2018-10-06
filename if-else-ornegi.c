#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	cout << "lütfen aldığınız notu giriniz: ";
	int not;
	cin >> not;
	if (not >= 90)
		cout << "notunuz \"AA\"\n";
	else if (not >= 80)
		cout << "Notunuz \"BA\"\n";
	else if (not > 70)
		cout << "Notunuz: \"BB\"\n";
	else
		cout << "Notunuz: \"FF\"\n";
	system("pause");
	return 0;
}