#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ʹ�ø��Ϸ�������� /= �ͺ��õ�������� ++   �Դ����嵥4-3�ĳ�������޸�
    int num,dig;
    dig = 0;

    do
    {
        printf("������һ���Ǹ�����:");
        scanf("%d",&num);
        if(num < 0)
            puts("�벻Ҫ���븺����");
    }while(num < 0);

    do
    {
        num /= 10;
        dig++;
    }while(num > 0);

    printf("��������λ��Ϊ��%d",dig);
    return 0;
}
