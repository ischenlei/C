
//创建一个函数，对元素个数为no的int型数组vc进行倒序排列

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

int rev_inttary(int vc[], int no)
{
    int i, temp;
    for (i = 0; i < no / 2; i++){
        temp = vc[i];
        vc[i] = vc[no - i - 1];
        vc[no - i - 1] = temp;
    }
}

int main()
{
    int i;
    int va[NUMBER];

    for (i = 0; i < NUMBER; i++){
        printf("va[%d]：", i);
        scanf("%d", &va[i]);
    }
    putchar('\n');

    rev_inttary(va, NUMBER);

    for (i = 0; i < NUMBER; i++)  printf("va[%d]：%d\n", i, va[i]);

    return 0;
}
