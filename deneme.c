#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL,"Turkish");
  int sayi1,sayi2;
  printf("lütfen birinci sayıyı giriniz: ");
  scanf_s("%d",&sayi1);
  printf("lütfen ikinci sayıyı giriniz: ");
  scanf_s("%d",&sayi2);
  int top;
  top=sayi1+sayi2;
  printf("İki sayının toplamı: %d",top);
  system("pause");
  return 0;
}
