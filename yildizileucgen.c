#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			cout << "*";
			
			
		}
		cout << "\n";
		for (int k = 0; k <= (i - 1); k++)
		{
			cout << " ";
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}
