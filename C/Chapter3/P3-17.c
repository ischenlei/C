#include <stdio.h>
#include <stdlib.h>

int main()
{
    //显示输入月份所在的季节
    int month;

    printf("请输入一个数：");
    scanf("%d",&month);

    switch(month)
    {
     case 3  :
     case 4  :
     case 5  :   puts("春天");            break;
     case 6  :
     case 7  :
     case 8  :   puts("夏天");            break;
     case 9  :
     case 10 :
     case 11 :   puts("秋天");            break;
     case 12 :
     case 1  :
     case 2  :   puts("冬天");
    }

    return 0;
}
