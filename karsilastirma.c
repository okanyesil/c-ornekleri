#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2;
	printf("lütfen birinci sayıyı giriniz: ");
	scanf_s("%d", &sayi1);
	printf("lütfen ikinci sayıyı giriniz: ");
	scanf_s("%d", &sayi2);
	if (sayi1 > sayi2)
	{
		printf("%d sayısı %d sayısından büyüktür\n", sayi1, sayi2);
	}
	else if (sayi2 > sayi1)
	{
		printf("%d sayısı %d sayısından büyüktür\n", sayi2, sayi1);
	}
	else
	{
		printf("sayılar eşittir.\n");
	}
	system("pause");
	return 0;
}