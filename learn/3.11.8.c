#include <stdio.h>

int main(void) {
	float cup;
	float pin;
	float ounce;
	float to;
	float tto;
	
	printf("Cups:");
	scanf("%f", &cup);
	
	pin = cup / 2;
	ounce = cup * 8;
	to = ounce * 2;
	tto = to * 3;

	printf("%.2f cups\n", cup);
	printf("=%.2f pin\n", pin);
	printf("=%.2f ounce\n", ounce);
	printf("=%.2f to\n", to);
	printf("=%.2f tto\n", tto);
	
	return 0;

}
