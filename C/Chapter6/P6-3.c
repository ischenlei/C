
//����һ����������int����������
#include <stdio.h>
#include <stdlib.h>

//----��������----
int cube(int x)
{
    return (x * x * x);
}

int main()
{
    int kx;

    printf("������һ��������");
    scanf("%d", &kx);

    printf("����������%d", cube(kx));
    return 0;
}
