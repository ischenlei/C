#include <stdio.h>
#include <stdlib.h>

int main()
{
    //���㲢��ʾ��1��5�ĺͣ�ʹ�ø��ϸ�ֵ�������
    int no,sum;
    no = 1;
    sum = 0;

    do
    {
        sum += no;      //��sum��ֵ����no
        no += 1;        //��no��ֵ����1
    }while(no <= 5);

    printf("1��5�ĺϼ�ֵ��%d\n",sum);

    return 0;
}
