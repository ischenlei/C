#include <stdio.h>
#include <stdlib.h>

int main()
{
    //���㲢��ʾ��1��5�ĺ�
    int no,sum;
    no = 1;
    sum = 0;       //��ʼ��

    do
    {
        sum = sum + no;
        no = no + 1;
    }while(no <= 5);

    printf("1��5�ĺ��ǣ�%d",sum);

    return 0;
}
