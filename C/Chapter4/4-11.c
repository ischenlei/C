#include <stdio.h>
#include <stdlib.h>
//����涨��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
int main()
{
    int i = 0;
    int sum = 0;       //�ϼ�ֵ
    int num,tmp;

    printf("Ҫ������ٸ�������");
    scanf("%d",&num);

    while(i < num)
    {
        printf("No.%d:", ++i);
        scanf("%d",&tmp);
        sum += tmp;
    }

    printf("�ϼ�ֵ��%d\n", sum);
    printf("ƽ��ֵ��%.2f\n", (double)sum / num);

    return 0;
}
