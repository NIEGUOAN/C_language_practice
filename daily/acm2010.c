#include <stdio.h>
int main()
{
    int i,j,k,n,a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int sign=0,sign_first=1;
        for(n=a; n>=a&&n<=b; n++)
        {
            i=n/100;
            j=n/10-i*10;
            k=n%10;
            if((n==i*i*i+j*j*j+k*k*k)&&(n<=b))
            {
                if(sign_first)
                {
                    printf("%d",n);
                    sign_first=0;
                }
                else
                    printf(" %d",n);
                sign=1;
            }
        }
        if(sign==0)
            printf("no");
        printf("\n");
    }
    return 0;
}