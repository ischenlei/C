
//创建一个函数，对元素个数为no的int类型数组vc进行倒序排列，并将其结果保存到数组v1中

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

void intary_rcpy (int v1[], const int v2[], int no)
{
    int i;
    for (i = 0; i < no; i++)
        v1[i] = v2[no - 1 - i];
}

int main()
{
    int i;
    int v1[NUMBER], va[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("va[%d]=", i);
        scanf("%d", &va[i]);
    }
    putchar('\n');

    intary_rcpy(v1, va, NUMBER);

    for (i = 0; i < NUMBER; i++)    printf("v1[%d]=%d\n", i, v1[i]);

    return 0;
}
