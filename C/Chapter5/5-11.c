#include <stdio.h>
#include <stdlib.h>
#define NUMBER  5             //ѧ������
//����5��ѧ���ķ�������ʾ�����е���߷ֺ���ͷ�
int main()
{
    int i;
    int tensu[NUMBER];        //ѧ���ķ���
    int max, min;             //��߷֣���ͷ�

    puts("������ѧ���ķ�����");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%d�ţ�", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];      //ͬʱ��tensu[0]�Ľ������min��max
    for(i = 1; i < NUMBER; i++)
    {
        if(tensu[i] > max)   max = tensu[i];
        if(tensu[i] < min)   min = tensu[i];
    }

    printf("��߷֣�%d\n", max);
    printf("��ͷ֣�%d\n", min);

    return 0;
}
