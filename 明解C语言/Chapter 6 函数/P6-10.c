
//����һ������������2��3�еľ���ma��3��2�еľ���mb�ĳ˻����ѽ�����浽2��2�еľ���mc��

#include <stdio.h>
#include <stdlib.h>

void mul(const int ma[2][3], const int mb[3][2], int mc[2][2])
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            mc[i][j] = ma[i][j] * mb[i][j];
}

int main()
{
    int i, j;
    int ma[2][3] = {{1, 2, 3},{4, 5, 6}};
    int mb[3][2] = {{6, 3},{4, 5},{1, 2}};
    int mc[2][2] = {0};

    mul(ma, mb, mc);

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            printf("%3d", mc[i][j]);
        putchar('\n');
    }

    return 0;
}
