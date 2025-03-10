#include <stdio.h>

int main(void) {
	char name[40];
	char name2[40];
	printf("Last Name:");
	scanf("%s", name);
	printf("First Name:");
	scanf("%s", name2);
	printf("%s %s\n", name, name2);
	return 0;

}
