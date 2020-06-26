#include <stdio.h>
#include <stdlib.h>
//不正确

char *str_copy(char *d, char *s)
{
    char *t = d;

    while (*d++ = *s++)
        ;
    return (t);
}

int main()
{
    char str[128] = "ABCD";
    char *ptr = "EFGH";

    printf("字符串s1：");
    scanf("%s", str);

    str_copy(ptr, str);

    puts("str复制到了ptr。");
    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);

    return 0;
}
