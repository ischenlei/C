#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx,vy,max;

    printf("����������������\n");
    printf("����A��");      scanf("%d",&vx);
    printf("����B��");      scanf("%d",&vy);

    if(vx=vy)
        puts("���");
    else if(vx>vy)
             puts("A����B");
         else
             puts("AС��B");

    return 0;
}
