#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx,vy;

    printf("����A��");      scanf("%d",&vx);
    printf("����B��");      scanf("%d",&vy);

    if(vx==vy)
        puts("������ȡ�");
    else
        puts("���ǲ���ȡ�");
    return 0;
}
