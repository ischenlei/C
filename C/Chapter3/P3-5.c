#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,min;  //na,nb,nc,最小值

    printf("请输入三个整数。\n");
    printf("整数A：");          scanf("%d",&n1);
    printf("整数B：");          scanf("%d",&n2);
    printf("整数C：");          scanf("%d",&n3);

    min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) min = n3;

    printf("最小值是：%d",min);
    return 0;
}
