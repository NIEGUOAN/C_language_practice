#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=1,sum=0;
     do
    {
     sum=sum+i;
     i=i+1;
    }while(i<=100);
    printf("sum=%d\n",sum);
    return 0;
}
