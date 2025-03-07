#include <stdio.h>
int main() {
	float inch;
	float cm;
	printf("press a inch number.\n");
	scanf("%f", &inch);
	cm = 2.54 * inch;
	printf("%.2f cm\n", cm);
	return 0;
}
