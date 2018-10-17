#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
int faktoriyel(int x);
int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	printf("lütfen faktöriyeli alınacak sayıyı giriniz:  ");
	scanf_s("%d", &sayi);
	printf("Sonuc:%d",faktoriyel(sayi));
	system("pause");
}
int faktoriyel(int x) {
	int toplam = 1;
	for (int i = 1; i <= x; i++) {
		toplam*=i;
	}
	return toplam;
}