#include <stdio.h>
#include <stdlib.h>
int a[1000];
int main()
{
    int t,i,num,flag;
    a[1]=1;
    for(i=2; i<1000; i++)
        a[i]=a[i-1]+i*i*i;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        scanf("%d",&num);
        for(i=1; i<1000; i++)
        {
            if(num<=a[i])
            {
                printf("%d\n",i);
                flag=1;
            }
            if(flag==1)
                break;
        }
    }

    return 0;
}
