#include <stdio.h>
#include <string.h>

int main(void) {
	char f_name[40];
	char l_name[40];
	printf("First Name:");
	scanf("%s", f_name);
	printf("Last Name:");
	scanf("%s", l_name);
	
	printf("\"%s %s\"\n", f_name, l_name);
	printf("\"%20s %20s\"\n", f_name, l_name);
	printf("\"%-20s %-20s\"\n", f_name, l_name);
	printf("\"%*s %*s\"\n", (int)strlen(f_name) + 3, f_name, (int)strlen(l_name) + 3, l_name);
	return 0;

}
