#include <stdio.h>

int main(void) {
	int age;
	double se;
	printf("Age:");
	scanf("%d", &age);
	se = age * 3.156e7;
	printf("%lf\n", se);
	return 0;
}
