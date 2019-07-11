#include <stdio.h>
int main()
{
    char a,b,c,d;
    while(scanf("%c%c%c",&a,&b,&c)!=EOF)
    {
        if(b>c)
        {
            d=c;
            c=b;
            b=d;
        }
        if(a>b)
        {
            d=b;
            b=a;
            a=d;
        }
        if(b>c)
        {
            d=c;
            c=b;
            b=d;
        }
        printf("%c %c %c\n",a,b,c);
        getchar();
    }
    return 0;
}