#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("������һ��������");
    scanf("%d",&no);

    if(no==0)
        puts("������Ϊ�㡣");
    else if(no>0)
        puts("�����������㡣");
    else
        puts("������С����");
    return 0;
}
