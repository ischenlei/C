//���������е�ǰ�������� 
#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	
	return 0;
} 
