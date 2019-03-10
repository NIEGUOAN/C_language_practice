#include <stdio.h>
#include <stdlib.h>

int main()
{
    void action1(int,int),action2(int,int);//函数声明
    char ch;
    int a=15,b=23;
    ch=getchar();
    switch(ch)
    {
        case'a':
        case'A':action1(a,b);break;//调用action1函数，执行操作A
        case'b':
        case'B':action2(a,b);break;//调用action2函数，执行操作B

        default:putchar('\a');//如果输入其他字符，发出警告

    }
    return 0;
}
    void action1(int x,int y)//执行加法
   {
    printf("x+y=%d\n",x+y);
   }
    void action2(int x,int y)//执行乘法
   {
    printf("x*y=%d\n",x*y);
   }
