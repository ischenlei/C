#include <stdio.h>
#include <stdlib.h>
//����涨����������ʾ���ǵĺϼ�ֵ��ƽ��ֵ��ʹ��for��䣩
int main()
{
    int i;
    int sum = 0;
    int num, tmp;

    printf("Ҫ������ٸ�����:");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
     printf("No.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }
       printf("�ϼ�ֵ�ǣ�%d\n", sum);
       printf("ƽ��ֵ�ǣ�%.2f\n", (double) sum / num);

    return 0;
}
