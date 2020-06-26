#include <stdio.h>
#include <stdlib.h>

int main()
{
    //确认switch语句动作的程序
    int sw;

    printf("请输入一个整数：");
    scanf("%d",&sw);

    switch(sw)
    {
        case 1 : puts("A");        puts("B");      break;
        case 2 : puts("C");
        case 5 : puts("D");                        break;
        case 6 :                                   break;
        case 7 : puts("E");                        break;
        default : puts("F");                       break;
    }
    return 0;
}
