#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�������������������ż��(���Լ�����Ը����ѭ������)
    int cont;   //Ҫ������

    do
    {
        int no;

        printf("������һ��������");
        scanf("%d",&no);

        if(no % 2)
            puts("�����������");
        else
            puts("�������ż��");

        printf("Ҫ���ظ�һ���𣿡�YES...0/NO...9��:");
        scanf("%d",&cont);
    }
    while(!cont);      //cont == 0�� !cont ��ͬ

    return 0;
}
