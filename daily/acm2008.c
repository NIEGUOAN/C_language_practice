#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, posnum=0, negnum=0, zero=0;
	double num;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		while (n--)
		{
			scanf("%lf", &num);
			if (num > 0)
				posnum++;
			if (num < 0)
			   negnum++;
			if (num == 0)
				zero++;
		}
		printf("%d %d %d\n", negnum, zero, posnum);
		negnum = 0;
		zero = 0;
		posnum = 0;
	}
	return 0;
}
