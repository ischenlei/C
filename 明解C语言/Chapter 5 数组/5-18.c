#include <stdio.h>
#include <stdlib.h>

//计算出100以内的质数（4）
int main()
{
    int i, no;
    int prime[100];                    //用来保存质数的数组
    int ptr = 0;                       //已经得到的质数个数
    unsigned long counter = 0;

    prime[ptr++] = 2;
    prime[ptr++] = 3;

    for (no = 5; no <= 100; no += 2){
        for (i = 1; i < ptr; i++){
            counter++;
            if (no % prime[i] == 0)
                break;
        }
        if (ptr == i)                  //直到最后也未被整除
            prime[ptr++] = no;
    }

    for (i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);

    printf("乘除运算的次数是：%lu\n", counter);

    return 0;
}
