#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,t;
    scanf("%f,%f,%f",&a,&b,&c);
    if(a>b)
    {
        t=a;                  //��������t��ʵ�ֱ���a��b����ֵ
        a=b;
        b=t;
    }                         //������aС�ڻ����b
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    printf("%5.2f,%5.2f,%5.2f\n",a,b,c);
    return 0;
}
