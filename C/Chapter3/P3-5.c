#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,min;  //na,nb,nc,��Сֵ

    printf("����������������\n");
    printf("����A��");          scanf("%d",&n1);
    printf("����B��");          scanf("%d",&n2);
    printf("����C��");          scanf("%d",&n3);

    min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) min = n3;

    printf("��Сֵ�ǣ�%d",min);
    return 0;
}
