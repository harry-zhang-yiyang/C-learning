#include <stdio.h>

int main(void) {
	int int_max = 2147483647;
	int int_overflow = int_max + 1;
	
	printf("Int_max: %d\n", int_max);
	printf("Int_overflow: %d\n", int_overflow);

	double big = 1.0e308;
	double double_overflow = big * 10;
	
	printf("Big double: %e\n", big);
	printf("Big double_overflow: %e\n", double_overflow);

	double small = 1.0e-308;
	double double_underflow = small / 10;
	
	printf("Small double: %e\n", small);
	printf("Small_underflow: %e\n", double_underflow);

	return 0;

}
