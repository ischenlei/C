#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "ABC";
    char *ptr = "123";

    //str = "DEF";    //����
    ptr = "456";    //��ȷ

    printf("str = \"%s\"\n", str);
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}
