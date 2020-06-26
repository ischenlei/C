#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "ABC";
    char *ptr = "123";

    //str = "DEF";    //´íÎó
    ptr = "456";    //ÕıÈ·

    printf("str = \"%s\"\n", str);
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}
