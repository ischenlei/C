#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输入的整数值是奇数还是偶数
    int no;

    printf("请输入一个数：");
    scanf("%d",&no);

    switch(no % 2)
    {
        case 0 : puts("您输入的是偶数");           break;
        default : puts("您输入的是奇数");          break;
    }

    return 0;
}
