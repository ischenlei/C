#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max;

    printf("����A��");        scanf("%d",&n1);
    printf("����B��");        scanf("%d",&n2);
    printf("����C��");        scanf("%d",&n3);

    max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;

    printf("���ֵ�ǣ�%d",max);
    return 0;
}
