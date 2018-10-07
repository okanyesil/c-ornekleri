#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	for (int i = 100; i>= 20;i--)
	{
		if (i % 3 == 0 && i%7==0)
			cout << " " << i;
	}
	cout << "\n";
	system("pause");
	return 0;
}