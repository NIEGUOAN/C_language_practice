#include <stdio.h>
#include<math.h>
int main()
{
    double v,r,sum=3.1415927;
    while(scanf("%lf",&r)!=EOF)
    {
        v=(4*sum/3)*r*r*r;
        printf("%.3lf\n",v);
    }
    return 0;
}