#include <stdio.h>
#include <stdlib.h>
//������ʾ��0�������������Ϊֹ�ĸ�������
int main()
{
    int i,no;
    i = 0;

    printf("������һ������:");
    scanf("%d",&no);

    while(i <= no)
        printf("%d ", i++);     //i��ֵ����ʾ֮�����
     putchar('\n');

    return 0;
}
