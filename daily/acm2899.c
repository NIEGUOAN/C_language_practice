#pragma warning(disable:4996)
#include<stdio.h>
double x, y;
double f(double x)
{
    return 6 * x* x* x* x* x* x* x + 8 * x * x * x * x * x * x + 7 * x * x * x + 5 * x * x - y * x;
}
double answer(double l, double r)
{
    double min = 1e-7;
    while (l + min< r)
    {
        double lmid = l + (r - l) / 3;
        double rmid = r - (r - l) / 3;
        if (f(lmid) < f(rmid))
            r = rmid;
        else
            l = lmid;
    }
    return f(l);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf", &y);
        printf("%.4f\n", answer(0, 100.0));
    }

    return 0;
}