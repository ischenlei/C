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

    printf("请输入字符串：");
    scanf("%s", st);

    printf("字符串%s的长度为%d", st, (unsigned)str_length(st));

    return 0;
}
