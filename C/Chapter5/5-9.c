#include <stdio.h>
#include <stdlib.h>
//����5��ѧ���ķ�������ʾ�����ǵ��ֺܷ�ƽ����
int main()
{
    int i;
    int tensu[5];   //5��ѧ���ķ���
    int sum =0;     //�ܷ�

    for(i = 0; i < 5; i++)
    {
        printf("%d�ţ�", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("�ܷ֣�%5d\n", sum);
    printf("ƽ���֣�%5.1f\n", (double)sum / 5);

    return 0;
}
