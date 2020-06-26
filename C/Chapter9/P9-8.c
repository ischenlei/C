#include <stdio.h>
#include <stdlib.h>

void put_string(const char str[])
{
    unsigned i = 0;

    while (str[i]) {
        putchar(str[i++]);
    }
    putchar('\n');
}

int main()
{
    char st[100];
    int cont;

    printf("请输入字符串：");      scanf("%s", st);
    printf("显示的次数：");        scanf("%d", &cont);

    while (cont != 0) {
        put_string(st);
        cont--;
    }

    return 0;
}
