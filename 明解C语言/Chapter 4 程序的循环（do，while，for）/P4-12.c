#include <stdio.h>
#include <stdlib.h>
//���㲢��ʾ1��5�ĺͣ���for��䣩
int main()
{
    int i;
    int sum = 0;
    int num;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("1��5�ĺ��ǣ�%d", sum);
    return 0;
}
