#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

double C[3010];
int main()
{
	int n, i;
	double a0, an_1, a1=0, sum = 0;
	while (scanf("%d", &n) != EOF)
	{
		sum = 0;
		scanf("%lf %lf", &a0, &an_1);
		for (i = 1; i <= n; i++)
			scanf("%lf", &C[i]);
		for (i = 1; i <= n; i++)
			sum = sum + (n - i + 1) * C[i];
		a1 = (n * a0 + an_1 - 2 * sum) / (n + 1);
		printf("%.2lf\n", a1);
	}
	return 0;
}
//A1 = [nA0 + An+1 - 2(n*C1+(n-1)*C2+...+2*Cn-1+1*Cn) ]/(n+1) 项数i与系数n-i+1