#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, no;
    unsigned long counter = 0;

    no = 2;
    printf("%d\n", no++);

    for ( ; no < 100; no += 2) {         //只把奇数作为判断对象
        for (i = 3; i < no; i += 2) {   //只判断能否被奇数整除
            counter ++;
            if (no % i == 0)
                break;
        }
        if (no == i)
            printf("%d\n", no);
    }

    printf("乘除运算的次数：%lu\n", counter);

    return 0;
}
