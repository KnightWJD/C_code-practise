//��1-100������
#include <stdio.h>
#include <stdlib.h> // rand �� srand ��ͷ�ļ�
#include <time.h>  // time �� ͷ�ļ�
int game()
{
    printf("***********************\n");
    printf("*** 0:play  1:exit  ***\n");
    printf("***********************\n");
}

int play()
{
    int b = 0;
    int c = 0;
    b = rand() % 100 + 1; //����b������Ϊ1-100
    printf("������һ����(1-100)\n");
    while(1)
    {
        scanf("%d",&c);
        if(c > b)
        {
            printf("���µ�����ƫ���������\n");
        }
        else if(c < b)
        {
            printf("���µ�����ƫС���������\n");
        }
        else
        {
            printf("��ϲ���¶���\n");
            break;
        }
    }

}

int main()
{
    int a = 0;
    srand(time(NULL)); //��main�������ֻ����һ���������
    do
    {
        game();
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("�˳���Ϸ�ɹ�\n");
            break;
        case 0:
            printf("\n��ʼ��Ϸ:\n");
            play();
            break;
        default:
            printf("�������\n");
            break;
        }

    }while(a == 0);
    return 0;
}
