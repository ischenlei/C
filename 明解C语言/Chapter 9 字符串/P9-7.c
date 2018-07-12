#include <stdio.h>
#include <stdlib.h>

void put_string(const char str[])
{
    unsigned len = 0;
    int i;
    while (str[len])
        len++;

    len = len - 1;
    while (str[len])
        putchar(str[len--]);
}

int main()
{
    char str[100];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", str);

    put_string(str);
    printf("\n");

    return 0;
}
