
//��ʾ��һ��ֱ�������·���ֱ�������Σ������棩

#include <stdio.h>
#include <stdlib.h>

//---������ʾ��no��*---
void put_stars(int no)
{
    while (no-- > 0)
        putchar('*');
}

int main()
{
    int i, ln;

    printf("�������м���:");
    scanf("%d", &ln);

    for (i = 0; i <= ln; i++){
        put_stars(i);
        putchar('\n');
    }

    return 0;
}
