#include <stdio.h>
#include<math.h>
int main()
{
    double X1,X2,Y1,Y2,S;
    while(scanf("%lf %lf %lf %lf",&X1,&Y1,&X2,&Y2)!=EOF)
    {
        S=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
        printf("%.2lf\n",S);
    }
    return 0;
}