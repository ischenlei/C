#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,dig,sum;

    printf("������һ���Ǹ�����");
    scanf("%d",&num);
    sum = num;
    do
    {
        if(num < 0)
            puts("�벻Ҫ���븺��");
    }while(num < 0);


    do
    {
        num = num / 10;
        dig = dig + 1;
    }while(num > 0);
    printf("%d��λ����%d",sum,dig);

    return 0;
}
