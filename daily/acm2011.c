#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    while (m--)
    {
        float t;
        scanf("%f", & t);
        float a = 1, b = 1, c = 2, sum = 1;
        for (n = 1; n < t; n++)
        {
            a = (-1) * a;
            b = a * (1 / c);
            sum = sum + b;
            c=c+1;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}