#include <stdio.h>
#include <string.h>

int main(void) {
	char f_name[50];
	char l_name[50];

	printf("First Name:");
	scanf("%s", f_name);
	
	printf("Last Name:");
	scanf("%s", l_name);
	
	int f_name_len;
	int l_name_len;

	f_name_len = strlen(f_name);
	l_name_len = strlen(l_name);

	printf("%s %s\n", f_name, l_name);
	printf("%-*d %-*d\n", f_name_len, f_name_len, l_name_len, l_name_len);
	
	return 0;

}	
