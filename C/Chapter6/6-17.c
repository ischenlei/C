
//�����������о���֮��

#include <stdio.h>
#include <stdlib.h>

//---���������еľ���ma��mb�ĺͱ��浽mc��---
void mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3])
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            mc[i][j] = ma[i][j] + mb[i][j];
}

int main()
{
    int i, j;
    int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mb[2][3] = {{6, 3, 4}, {5, 1, 2}};
    int mc[2][3] = {0};

    mat_add(ma, mb, mc);

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++)
            printf("%2d", mc[i][j]);
        putchar('\n');
    }

    return 0;
}
