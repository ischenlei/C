#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    do
    {
        printf("������һ��������");
        scanf("%d",&num);
        if(num < 0)
            puts("�벻Ҫ���븺��");
    }while(num < 0);

    printf("%d��������ʾ���Ϊ:",num);
    do
    {
        printf("%d",num % 10);
        num = num / 10;
    }while(num > 0);
    puts("��");
    return 0;
}
