#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	for (int i = 21; i <= 50;i+=2)
	{
		cout << " " << i;
	}
	cout << "\n";
	system("pause");
	return 0;
}