#include <stdio.h>
#include <stdlib.h>
//����һ��������������ʾ����������*
int main()
{
    int no;

    printf("������һ����������");
    scanf("%d",&no);

    while(no-- > 0)
        putchar('*');
    putchar('\n');

    return 0;
}
