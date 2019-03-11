#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    printf("please enter i,i=?");
    scanf("%d",&i);
    while(i<=10)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum=%d\n",sum);
    return 0;
}
