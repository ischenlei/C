#include <stdio.h>
#include <stdlib.h>
//����һ������������ʾ��������*.
int main()
{
    int i, no;

    printf("������һ����������");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
        putchar('*');
    putchar('\n');
    return 0;
}
