#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)
#define PI 3.1415926
int main()
{
	int t;
	double x1, y1, x2, y2;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
		double a = atan2(y1, x1) * 180.0 / PI;
		double b = atan2(y2, x2) * 180.0 / PI;
		double c = fabs(a - b);
		printf("%.2lf\n", min(c, 360.0 - c));
	}
	return 0;
}