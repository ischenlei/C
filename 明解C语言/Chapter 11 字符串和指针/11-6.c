#include <stdio.h>
#include <stdlib.h>

size_t str_length(const char *s)
{
    size_t len = 0;

    while (*s++)
        len++;
    return (len);
}

int main()
{
    char st[100];

    printf("�������ַ�����");
    scanf("%s", st);

    printf("�ַ���%s�ĳ���Ϊ%d", st, (unsigned)str_length(st));

    return 0;
}
