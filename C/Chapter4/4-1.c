#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输入的整数是奇数还是偶数(按自己的意愿进行循环操作)
    int cont;   //要继续吗

    do
    {
        int no;

        printf("请输入一个整数：");
        scanf("%d",&no);

        if(no % 2)
            puts("这个数是奇数");
        else
            puts("这个数是偶数");

        printf("要再重复一次吗？【YES...0/NO...9】:");
        scanf("%d",&cont);
    }
    while(!cont);      //cont == 0和 !cont 相同

    return 0;
}
