#include <stdio.h>
#include <stdlib.h>

//�����100���ڵ�������2��
//����2��ż��������
int main()
{
    int i, no;                      //ѭ������
    unsigned long counter = 0;      //��������ִ�еĴ���

    no = 2;
    printf("%d\n", no++);           //2��ż����Ψһ������

    for( ; no <= 100; no+= 2){     //ֻ��������Ϊ�ж϶���
        for(i = 2; i < no; i++){
            counter++;
            if(no % i == 0)         //�ܱ������Ĳ�������
                break;              //�˳�����ѭ��
        }
        if(no == i)                 //ֱ�����Ҳû�б�����
            printf("%d\n", no);
    }

    printf("�˳�����Ĵ�����%lu\n", counter);

    return 0;
}
