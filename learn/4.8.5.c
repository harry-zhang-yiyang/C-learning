#include <stdio.h>

int main() {
	float Mb_s;
	float MB;
	float time;

	scanf("%f", &Mb_s);
	scanf("%f", &MB);

	time = (MB * 8) / Mb_s;

	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", Mb_s, MB, time);

	return 0;

}	
	
