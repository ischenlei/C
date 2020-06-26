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

    printf("请输入字符串：");
    scanf("%s", st);

    printf("字符串%s的长度为%d\n", st, str_length(st));

    return 0;
}
