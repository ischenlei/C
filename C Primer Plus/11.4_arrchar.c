//指针数组、字符串数组 
#include <stdio.h>
#define SLEN 40
#define LIM 5
int main()
{
	const char *my[SLEN] = {
		"Adding numbers swiftly",
		"Multiplying accurately", 
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	char your[LIM][SLEN] = {
		"Walking in a straight line",
		"Sleeping", 
		"Watching television",
		"Mailing letters", 
		"Reading email"
	};

	puts("Let's compare talents.");
	printf("%-36s %-25s\n", "My talents", "Your talents");

	int i;
	for (i = 0; i < LIM; i++)
		printf("%-36s %-25s\n", my[i], your[i]);
	printf("\nsizeof my: %u, sizeof your: %u\n", sizeof(my), sizeof(your));

	return 0;
}
