#include <stdio.h>
#include <stdlib.h>
int main() {
	for (int i = 1; i <= 4; i++) {
		for (int k = 4; k >= i; k--) {
			printf(" ");
		}
		for (int j = 1; j <= (2*i-1); j++) {
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}