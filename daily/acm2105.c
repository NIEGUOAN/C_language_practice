#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	double x1, y1, x2, y2, x3, y3;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		else
		{
			while (n--)
			{
				scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
				printf("%.1lf %.1lf\n", (x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3);
			}
		}
	}
	return 0;
}