//一个拖沓且错误的猜数字程序
#include <stdio.h>
int main()
{
	int guess = 0;
	
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while (getchar() != 'y') {
		printf("Well, then, is it %d?\n", ++guess);       //同时发送了字母和 Enter键 
		//while (getchar() != '\n')
		//	continue;
	}
	printf("I know I could do it!\n");
	
	return 0;
}
