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

    printf("�������ַ�����");      scanf("%s", st);
    printf("��ʾ�Ĵ�����");        scanf("%d", &cont);

    while (cont != 0) {
        put_string(st);
        cont--;
    }

    return 0;
}
