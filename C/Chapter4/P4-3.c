#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,num,sum,no;
    num = 0;

    printf("��������������\n");
    printf("����1��");              scanf("%d",&n1);
    printf("����2��");              scanf("%d",&n2);

    sum = n1;
    no  = n1;
    do
    {
        no  = no  + 1;
        sum = sum + no;
        num = num + 1;
    }while(num <= (n2 - n1 - 1));

    printf("���ڵ���%dС�ڵ���%d�������������ǣ�%d",n1,n2,sum);

    return 0;
}
