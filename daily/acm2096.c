#include <stdio.h>
int main()
{
    int n;
    char c[12];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",c);
        printf("6%s\n",c+6);
    }
    return 0;
}