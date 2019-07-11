#include <stdio.h>//acm2018
int main()
{
    int n,i;
    int a[55];
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=4;
    for(i=5; i<=55; i++)
        a[i]=a[i-1]+a[i-3];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else
            printf("%d\n",a[n]);
    }
    return 0;
}
