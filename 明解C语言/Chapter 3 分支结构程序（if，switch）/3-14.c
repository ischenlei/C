#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    puts("����������������");
    printf("����A��");            scanf("%d",&n1);
    printf("����B��");            scanf("%d",&n2);

    printf("���ǵĲ��ǣ�%d",(n1 > n2) ? n1 - n2 : n2 - n1);

    return 0;
}
