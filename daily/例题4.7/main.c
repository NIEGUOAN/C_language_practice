#include <stdio.h>
#include <stdlib.h>

int main()
{
    void action1(int,int),action2(int,int);//��������
    char ch;
    int a=15,b=23;
    ch=getchar();
    switch(ch)
    {
        case'a':
        case'A':action1(a,b);break;//����action1������ִ�в���A
        case'b':
        case'B':action2(a,b);break;//����action2������ִ�в���B

        default:putchar('\a');//������������ַ�����������

    }
    return 0;
}
    void action1(int x,int y)//ִ�мӷ�
   {
    printf("x+y=%d\n",x+y);
   }
    void action2(int x,int y)//ִ�г˷�
   {
    printf("x*y=%d\n",x*y);
   }
