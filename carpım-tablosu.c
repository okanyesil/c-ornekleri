#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			
			printf("%d ", i*j);
		}
		cout << "\n";
	}
	cout << "\n";
	system("pause");
	return 0;
}
