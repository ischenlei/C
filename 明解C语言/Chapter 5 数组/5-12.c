#include <stdio.h>
#include <stdlib.h>
//����5��ѧ���ķ�������ʾ��60������ѧ����һ����
#define NUMBER  5        //ѧ������
int main()
{
    int i;
    int snum = 0;                //����ѧ������
    int tensu[NUMBER];           //NUMBER��ѧ������
    int succs[NUMBER];           //����ѧ��һ�������漰��ѧ�����±꣩

    puts("������ѧ������");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%2d��:", i + 1);
        scanf("%d", &tensu[i]);
        if(tensu[i] >= 60)
            succs[snum++] = i;   //��ӵ�����ѧ��һ������
    }

    puts("����ѧ��һ����");
    puts("--------------");

    for(i = 0; i < snum; i++)
        printf("%2d��(%3d��)\n",succs[i] + 1, tensu[succs[i]]);

    return 0;
}
