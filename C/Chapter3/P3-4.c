#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx,vy,max;

    printf("请输入两个整数。\n");
    printf("整数A：");      scanf("%d",&vx);
    printf("整数B：");      scanf("%d",&vy);

    if(vx=vy)
        puts("相等");
    else if(vx>vy)
             puts("A大于B");
         else
             puts("A小于B");

    return 0;
}
