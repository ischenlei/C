#include <stdio.h>
#include <stdlib.h>

int main()
{
    //������ʾ����ķǸ�����
    int num;

    do
    {
        printf("������һ���Ǹ�������");
        scanf("%d",&num);

        if(num < 0)
            puts("�벻Ҫ���븺����");
    }while(num < 0);

    printf("������������ʾ�Ľ����");
    do
    {
        printf("%d",num % 10);           //��ʾ���һλ��
        num = num / 10;                  //����һλ
    }while(num > 0);
    puts("��");

    return 0;
}
