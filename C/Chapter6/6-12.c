
//将数值的所有元素设置为0

#include <stdio.h>
#include <stdlib.h>

//---把0赋给有no个元素的数组vc的所有元素---
void int_set(int vc[], int no)
{
    int i;

    for (i = 0; i < no; i++)
        vc[i] = 0;
}

int max_of(const int vc[], int no)
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
            max = vc[i];
    return (max);
}

int main()
{
    int i;
    int ary1[] = {1, 2, 3, 4, 5};
    int ary2[] = {3, 2, 1};

    int_set(ary1, 5);
    int_set(ary2, 3);

    for (i = 0; i < 5; i++)  printf("ary1[%d] = %d\n", i, ary1[i]);
    for (i = 0; i < 3; i++)  printf("ary2[%d] = %d\n", i, ary2[i]);

    return 0;
}
