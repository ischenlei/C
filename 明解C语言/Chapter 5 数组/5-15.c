#include <stdio.h>
#include <stdlib.h>

//计算出100以内的质数（1）
int main()
{
    int i, no;                      //循环变量
    unsigned long counter = 0;      //除法运算执行的次数

    for(no = 2; no <= 100; no++){
        for(i = 2; i < no; i++){
            counter++;
            if(no % i == 0)         //能被整除的不是质数
                break;              //退出上述循环
        }
        if(no == i)                 //直到最后也没有被整除
            printf("%d\n", no);
    }

    printf("乘除运算的次数：%lu\n", counter);

    return 0;
}
