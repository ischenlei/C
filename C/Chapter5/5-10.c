#include <stdio.h>
#include <stdlib.h>
#define NUMBER 5   //ѧ������
//����5��ѧ���ķ�������ʾ�����ǵ��ֺܷ�ƽ����
int main()
{
    int i;
    int tensu[NUMBER];   //ѧ���ķ���
    int sum = 0;

    puts("������ѧ���ķ�����");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%d��:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("��  �֣�%5d\n", sum);
    printf("ƽ���֣�%5.1f", (double)sum / NUMBER);

    return 0;
}
