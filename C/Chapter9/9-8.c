#include <stdio.h>
#include <stdlib.h>

unsigned str_length(const char str[])
{
    unsigned len = 0;

    while (str[len])
        len++;
    return (len);
}

int main()
{
    char st[100];

    printf("�������ַ�����");
    scanf("%s", st);

    printf("�ַ���%s�ĳ���Ϊ%d\n", st, str_length(st));

    return 0;
}
