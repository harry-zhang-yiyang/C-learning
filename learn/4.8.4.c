#include <stdio.h>

int main(void) {
	char name[50];
	float height;
	float m_height;

	printf("Height:");
	scanf("%f", &height);
	
	m_height = height / 100;
	
	printf("Name:");
	scanf("%s", name);

	printf("%s, you are %.3f meter tall\n", name, m_height);

	return 0;

}
