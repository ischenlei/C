#include <stdio.h>
#include <stdlib.h>

int main()
{
    //计算并显示从1到5的和
    int no,sum;
    no = 1;
    sum = 0;       //初始化

    do
    {
        sum = sum + no;
        no = no + 1;
    }while(no <= 5);

    printf("1到5的和是：%d",sum);

    return 0;
}
