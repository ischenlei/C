#include <stdio.h>
#include <stdlib.h>
//����ѧ���ķ�������ʾ���ֲ����
#define NUMBER 80    //��������
int main()
{
    int i, j;
    int num;             //ʵ������
    int tensu[NUMBER];   //�����ѧ������
    int bunpu[11] = {0}; //�ֲ�ͼ

    printf("������ѧ������:");
    do
    {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER)
            printf("������Χ[1��%d]:", NUMBER);
    }while(num < 1 || num > 80);

    puts("������ѧ������:");
    for(i = 0; i < num; i++)
    {
        printf("%2d�ţ�", i + 1);
        do
        {
            scanf("%d", &tensu[i]);
            if(tensu[i] < 0 || tensu[i] > 100)
                printf("������Χ[0��100]:");
        }while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("--�ֲ�ͼ--");
    printf("  100  :");
    for(j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for(i =9; i >= 0; i--)
    {
        printf("%3d-%2d:", i*10, i * 10 + 9);
        for(j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
