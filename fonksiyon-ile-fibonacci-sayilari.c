#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
int faktoriyel(int x);
int fibo(int);
int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("lütfen faktöriyeli alınacak sayıyı giriniz:  ");
	scanf_s("%d", &sayi);
	fibo(sayi);
	system("pause");
}
int fibo(int y) {
	int onceki=1;
	int sonraki=1;
	int toplam = 0;
	printf("1 1");
	for (int i = 1; i <= y; i++) { // 1 1 2 3 5 8 13 21 olmalı
		toplam = onceki + sonraki;
		printf(" %d ", toplam);
		onceki = sonraki;
		sonraki = toplam;

	}
	return 0;
}
int faktoriyel(int x) {
	int toplam = 1;
	for (int i = 1; i <= x; i++) {
		toplam*=i;
	}
	return toplam;
}