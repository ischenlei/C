#include <stdio.h>
#include <stdlib.h>
//��дһ�γ�����ʾ��ߺͱ�׼���صĶ��ձ�
int main()
{
    //�����ĸ����ͱ���
    int starnum, overnum, blanknum, hight;  //��ʼ��ֵ��������ֵ�������ֵ�����
    //����һ��double�ͱ���������ؼ�����
    double standweight;                     //��׼����

    printf("��ʼ��ֵ(cm)��");    scanf("%d", &starnum);
    printf("������ֵ(cm)��");    scanf("%d", &overnum);
    printf("�����ֵ(cm)��");    scanf("%d", &blanknum);


    for(hight = starnum; hight <= overnum; hight = hight + blanknum)
    {
        standweight = (hight - 100) * 0.9;
        printf("%dcm\t%.2lfkg\n", hight, standweight);
    }

    return 0;
}

