
//��������������ƽ����
#include <stdio.h>
#include <stdlib.h>

//----����ƽ��----
int sqr (int x)
{
    return (x * x);
}

//----���ز�ֵ----
int diff(int x, int y)
{
    return (x > y ? x - y : y - x);
}

int main()
{
    int kx, ky, kx2, ky2;

    puts("����������������");
    printf("����kx��");       scanf("%d", &kx);
    printf("����ky��");       scanf("%d", &ky);

    kx2 = sqr(kx);
    ky2 = sqr(ky);
    printf("kx��ky��ƽ������%d��\n", diff(kx2, ky2));
                                   //diff(sqr(kx), sqr(ky))

    return 0;
}
