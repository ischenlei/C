#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nx;
    double dx;
    int vc[3];

    printf("nx   �ĵ�ַ��%p\n", &nx);
    printf("dx   �ĵ�ַ��%p\n", &dx);
    printf("vc[0]�ĵ�ַ��%p\n", &vc[0]);
    printf("vc[1]�ĵ�ַ��%p\n", &vc[1]);
    printf("vc[2]�ĵ�ַ��%p\n", &vc[2]);

    return 0;
}
