
//������߷�

#include <stdio.h>
#include <stdlib.h>

#define NUMBER  5

int tensu[NUMBER]; //��������

int top(void);     //[������������]

int main()
{
    extern int tensu[];//�Ƕ�������
    int i;

    printf("������%d��ѧ���ĳɼ���\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d:", i + 1);
        scanf("%d", &tensu[i]);
    }
    printf("��߷�=%d\n", top());

    return 0;
}

//---��������tensu�����ֵ---
int top(void)
{
    extern int tensu[];
    int i;
    int max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max)
            max = tensu[i];
    }
    return (max);
}
