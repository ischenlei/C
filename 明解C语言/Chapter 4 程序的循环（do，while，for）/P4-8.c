#include <stdio.h>
#include <stdlib.h>
//��1��ʼ����  �����С��0��ʱ�򲻻���
int main()
{
    int i,no;
    i = 1 ;

    printf("������һ��������:");
        scanf("%d",&no);

    while(i <= no)
        printf("%d ", i++);     //i��ֵ����ʾ֮�����

    return 0;
}
