
//��ʾ��һ��ֱ�������·���ֱ�������Σ������棩

#include <stdio.h>
#include <stdlib.h>

//---������ʾno���ַ�ch---
void put_nchar(int ch, int no)
{
    while (no-- > 0)
        putchar(ch);
}

int main()
{
    int i, ln;
    printf("�������м��㣺");
    scanf("%d", &ln);

    for (i = 0; i <= ln; i++){
        put_nchar(' ', ln - i);
        put_nchar('*', i);
        putchar('\n');
    }

    return 0;
}
