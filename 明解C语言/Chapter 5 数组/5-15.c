#include <stdio.h>
#include <stdlib.h>

//�����100���ڵ�������1��
int main()
{
    int i, no;                      //ѭ������
    unsigned long counter = 0;      //��������ִ�еĴ���

    for(no = 2; no <= 100; no++){
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
