
//创建一个函数，返回元素个数为no的int型数组vc中的最小值

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5
int min_of(const int vc[], int no)
{
    int i;
    int min = vc[0];
    for (i = 0; i < no; i++){
        if (min > vc[i])
            min = vc [i];
    }
    return (min);
}

int main()
{
    int i;
    int va[NUMBER];

    printf("请输入%d个数。\n", NUMBER);
    for (i = 1; i <= NUMBER; i++) {
        printf("%d：", i);    scanf("%d", &va[i]);
    }

    printf("最小值：%d", min_of(va, NUMBER));

    return 0;
}
