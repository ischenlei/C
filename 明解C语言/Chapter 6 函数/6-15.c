
//顺序查找（哨兵查找法）

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5
#define FALLED -1
/*
//---通过哨兵查找法顺序查找---
int search(int vc[], int key, int no)
{
    int i = 0;
    vc[no] = key;//添加哨兵

    while (1){
        if (vc[i] == key)
            break;
        i++;
    }
    return (i == no ? FALLED : i);
}
*/

int search(int vc[], int key, int no)
{
    int i;
    vc[no] = key;

    for (i = 0; vc[i] != no; i++)
        ;

    return (i == no ? FALLED : i);
}

int main()
{
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++){
        printf("vx[%d]=", i);
        scanf("%d", &vx[i]);
    }
    printf("要查找的值：");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FALLED)
        puts("查找失败");
    else
        printf("%d是数组的第%d号元素。\n", ky, idx + 1);

    return 0;
}
