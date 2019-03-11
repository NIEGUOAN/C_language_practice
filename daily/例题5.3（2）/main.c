#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    printf("please enter i,i=?");
    scanf("%d",&i);
    do
    {
        sum=sum+i;
        i=i+1;
    }while(i<=10);
    printf("sum=%d\n",sum);
    return 0;
}
