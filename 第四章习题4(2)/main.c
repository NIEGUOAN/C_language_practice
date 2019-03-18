#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,temp,max;
    printf("请输入3个整数:");
    scanf("%d %d %d",&a,&b,&c);
    temp=(a>b)?a:b;
    max=(temp>c)?temp:c;
    printf("3个整数的最大数是%d\n",max);
    return 0;
}
