//表示字符串的几种方式 
#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAX 81
int main()
{
	char words[MAX] = "I am a string in an array.";
	const char *pt1 = "Something is pointing at me.";
	
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = 'p';
	puts(words);
	
	return 0;
}
