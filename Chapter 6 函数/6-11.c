
//����Ӣ���������ѧ�����е���߷�

#include <stdio.h>
#include <stdlib.h>

#define NUMBER  5
/*
//---����Ԫ�ظ���Ϊno������vc�е����ֵ---
int max_of(int vc[], int no)
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
        max = vc[i];
    return (max);
}
*/
int max_of(const int vc[], int no)//const�������η�����ֹ�ں������޸Ľ��յ�����������
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
            max = vc[i];
    return (max);
}

int main()
{
    int i;
    int english[NUMBER], math[NUMBER];    //Ӣ������� ��ѧ����
    int max_english, max_math;            //Ӣ����߷֣� ��ѧ��߷�

    printf("������%d��ѧ���ĳɼ���\n",NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("[%d]Ӣ�", i + 1);    scanf("%d", &english[i]);
        printf("   ��ѧ��");            scanf("%d", &math[i]);
    }

    max_english = max_of(english, NUMBER);
    max_math = max_of(math, NUMBER);

    printf("Ӣ����߷֣�%3d\n", max_english);
    printf("��ѧ��߷֣�%3d\n", max_math);

    return 0;
}
