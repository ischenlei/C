#include <stdio.h>
#include <stdlib.h>
//������������ʼ������0

int main()
{
    int no;

    printf("������һ������:");
    scanf("%d",&no);

    while (no >= 0)
        printf("%d ",no--);          //no��ֵ����ʾ֮��ݼ�

    putchar('\n');

    return 0;
}
