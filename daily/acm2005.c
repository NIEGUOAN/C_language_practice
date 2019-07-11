#include <stdio.h>
int main()
{
    int a,b,c,sum;
    while(scanf("%d/%d/%d",&a,&b,&c)!=EOF)
    {
        sum=31*(b-1)+c;
        if(b>2)
        {
            int days=(a%4==0&&a%100!=0)||a%400==0?-2:-3;
            sum=sum+days;
        }
        if(b>=5)
            sum=sum-1;
        if(b>=7)
            sum=sum-1;
        if(b>=10)
            sum=sum-1;
        if(b==12)
            sum=sum-1;
        printf("%d\n",sum);
        }
    return 0;
}