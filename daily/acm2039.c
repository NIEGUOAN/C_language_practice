#include <stdio.h>
int main()
{
    int n;
    double A,B,C;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf %lf",&A,&B,&C);
        if(A+B>C&&A+C>B&&B+C>A&&A>0&&B>0&&C>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}