#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ʾ�����·������ļ���
    int month;    //�·�

    printf("�������·ݣ�");
    scanf("%d",month);

    if(month >= 3 && month <= 5)
        puts("�Ǵ���");
    else if(month >= 6 && month <= 8)
        puts("������");
    else if(month >= 9 && month <= 11)
        puts("������");
    else if(month >=12 && month <= 2)
        puts("�Ƕ���");
    else
        puts("�����ڵġ�");

    return 0;
}
