#include <stdio.h>
#include <stdlib.h>
//��0������ʾ������������� ����4-9
int main()
{
    int i, no;

    printf("������һ����������");
    scanf("%d",&no);

    for(i = 0; i <= no; i++)
    printf("%d",i);
    putchar('\n');

    return 0;
}
