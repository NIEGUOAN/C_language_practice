#include <stdio.h>
int main()
{
    int N,p=1;
    while(scanf("%d",&N)!=EOF)
    {
        while(N--)
        {
            p=p+1;
            p=p*2;
        }
        p=p/2;
        p=p-1;
        printf("%d\n",p);
        p=1;
    }
    return 0;
}