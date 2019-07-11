#include <stdio.h>
int main()
{
    int fac(int n);
    int n=0;
    double e=0,y;
    printf("n e\n");
    printf("- -----------\n");
    if(n==0)
    {
        e=1;
        printf("%d %.0lf\n",n,e);
    }
    n=n+1;
    if(n==1)
    {
        e=2;
        printf("%d %.0lf\n",n,e);
    }
    n=n+1;
    if(n==2)
    {
        e=2.5;
        printf("%d %.1lf\n",n,e);
    }
    for(n=3; n<10; n++)
    {
        y=fac(n);
        e=e+1/y;
        printf("%d %.9lf\n",n,e);
    }
    return 0;
}

int fac(int n)
{
    int f;
    if(n==0||n==1)
        f=1;
    else
        f=fac(n-1)*n;
    return(f);
}
