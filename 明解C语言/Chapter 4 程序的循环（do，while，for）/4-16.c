#include <stdio.h>
#include <stdlib.h>
//����һ���Ǹ�������������ʾ���÷Ǹ�������*��ѭ��������������ָ����
int main()
{
    int cont;

    do{
        int num, i;

        do{
            printf("������һ��������");
            scanf("%d", &num);
            if(num < 0)
                puts("�벻Ҫ���븺������");
        }while(num < 0);

        for(i = 1; i <= num; i++)
            putchar('*');
        putchar('\n');

        printf("�Ƿ����ִ�У���Yes...0/No...9��:");
        scanf("%d", &cont);

    }while(!cont);

    return 0;
}
