#include <stdio.h>

int main(void) {
	float length;
	float fuel;

	printf("Length:");
	scanf("%f", &length);
	
	printf("Fuel:");
	scanf("%f", &fuel);

	float n_length;
	float n_fuel;

	const double L = 3.785;
	const double KM = 1.609;

	n_length = length * KM;
	n_fuel = fuel * L;

	float tr = n_fuel / n_length * 100;

	printf("%.1f", tr);

}
