#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;

    printf("������һ��������");
    scanf("%d",&no);

    if(no%2)
        puts("�������������");
    else
        printf("���������ż��");
    return 0;
}
