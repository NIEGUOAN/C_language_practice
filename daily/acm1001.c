#include <stdio.h>
int main()
{
    int n,i,a=1,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        a=1;
        sum=0;
        for(i=0; i<n; i++)
        {
            sum=sum+a;
            a=a+1;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}
