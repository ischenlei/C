#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx;
    printf("������һ��������");      scanf("%d",&vx);

    if((vx%10)==5)
        puts("������ĸ�λ���塣");
    else
        puts("������ĸ�λ������");
    return 0;
}
