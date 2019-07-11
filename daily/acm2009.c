#include <stdio.h>
#include<math.h>
int main()
{
    double n,m,i;
    while(scanf("%lf %lf",&n,&m)!=EOF)
    {
        double sum=n;
        for(i=1; i<m; i++)
        {
            n=sqrt(n);
            sum+=n;

        }
        printf("%.2lf\n",sum);
    }

    return 0;
}