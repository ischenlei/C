//printf()µÄ·µ»ØÖµ 
#include <stdio.h>

int main()
{
	int num = 212;
	int rv;
	
	rv = printf("%d F is water's boiling point.\n", num);
	printf("The printf() function printed %d characters.\n", 
			rv);
			
	return 0;
} 
