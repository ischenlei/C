#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max;  //na,nb,nc,���ֵ

    printf("����������������\n");
    printf("����A��");          scanf("%d",&n1);
    printf("����B��");          scanf("%d",&n2);

    max = (n1>n2) ? n1:n2;    //���ϴ��ֵ����max

    printf("���ֵ�ǣ�%d",max );

    return 0;
}
