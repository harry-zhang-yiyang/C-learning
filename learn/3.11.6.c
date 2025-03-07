#include <stdio.h>

int main(void) {
	int k;
	double g;
	double f;
	
	printf("K:");
	scanf("%d", &k);
	g = k * 950;
	f = g / 3e-23;
	printf("%.2e\n", f);
	return 0;

}
