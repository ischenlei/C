#include <stdio.h>
#include <stdlib.h>

/*int maxof(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}*/

//���ؽϴ�������ֵ
int maxof(int x, int y)
{
    return ((x > y)? x : y);
}

int main()
{
    int na, nb;

    puts("����������������");
    printf("����1��");       scanf("%d", &na);
    printf("����2��");       scanf("%d", &nb);

    printf("�ϴ�������ֵ:%d", maxof(na, nb));

    return 0;
}
