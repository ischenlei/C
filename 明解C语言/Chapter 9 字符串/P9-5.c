#include <stdio.h>
#include <stdlib.h>

void put_string(const char str[])
{
    unsigned i = 0;

    for (i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);
}

int main()
{
    char st[100];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", st);

    put_string(st);
    putchar('\n');

    return 0;
}
