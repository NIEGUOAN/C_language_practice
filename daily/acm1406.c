#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
    int n,num1,num2,i,j,sum,flag,m;
    do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    while(n--)
    {
        flag=0;
        scanf("%d %d",&num1,&num2);
        if(num1>num2)
        {
            m=num1;
            num1=num2;
            num2=m;
        }
        for(i=num1; i<=num2; i++)
        {
            sum=0;
            for(j=1; j<i; j++)
            {
                if(i%j==0)
                {
                    sum=sum+j;
                }
            }
            if(i==sum)
            {
                flag++;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}