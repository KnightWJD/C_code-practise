//���Թػ�
#include <stdio.h>

int main()
{
    char aa[20] = {0};
    system("shutdown -s -t 120");
gt:
    printf("���ĵ��Խ���2�����ڹػ���������� 123 ���Թر�\n������>");
    scanf("%s",aa);
    if(strcmp(aa,"123") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto gt;
    }
    return 0;
}
