#include <stdio.h>
#include <stdlib.h>

void put_string(const char *s)
{
    while (*s)
        putchar(*s++);
}

int main()
{
    char str[100];

    printf("�������ַ�����");
    scanf("%s", str);

    put_string(str);

    putchar('\n');

    return 0;
}
