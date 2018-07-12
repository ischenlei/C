#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max;  //na,nb,nc,最大值

    printf("请输入三个整数。\n");
    printf("整数A：");          scanf("%d",&n1);
    printf("整数B：");          scanf("%d",&n2);

    max = (n1>n2) ? n1:n2;    //将较大的值赋给max

    printf("最大值是：%d",max );

    return 0;
}
