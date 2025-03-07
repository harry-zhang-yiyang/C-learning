#include <stdio.h>

int main(void) {
	double h;
	double cm;

	printf("Height:");
	scanf("%lf", &h);
	
	cm = h * 2.54;

	printf("%f\n", cm);

	return 0;

}
