#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��������ķǸ�������λ��
    int num,dig;    //�Ǹ�������λ����

    do
    {
        printf("������һ��������");
        scanf("%d",&num);
        if(num < 0)
            puts("�벻Ҫ���븺��");
    }while(num < 0);

    dig = 0;
    do
    {
        num = num / 10;         //����һλ
        dig = dig + 1;
    }while(num > 0);
    printf("��������λ��Ϊ��%d",dig);

    return 0;
}
