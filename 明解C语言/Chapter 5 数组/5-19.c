#include <stdio.h>
#include <stdlib.h>

//计算出100以内的质数（5）
int main()
{
    int i, no;
    int prime[100];                          //用来保存质数的数组
    int prt = 0;                             //已经得到的质数个数
    unsigned long counter = 0;

    prime[prt++] = 2;                         //2是质数
    prime[prt++] = 3;                         //3是质数

    for(no = 5; no <= 100; no+= 2) {
        int flag = 0;
        //逗号运算符：a,b 顺次对a和b进行计算，并把b的结果作为整个表达式的值
        for (i = 1; counter++, prime[i] * prime [i] <= no; i++){
            counter++;
            if (no % prime[i] == 0) {
            flag = 1;
            break;
        }
            }
        if (!flag)                           //直到最后也未被整除
            prime[prt++] = no;               //添加到数组中
    }

    for (i = 0; i < prt; i++)
        printf("%d\n", prime[i]);

    printf("乘除运算的次数：%lu\n", counter);

    return 0;
}
