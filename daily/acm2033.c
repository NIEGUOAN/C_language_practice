#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, AM, AS, BM, BS, M, S, i = 0, j = 0;
	long long int AH, BH, H;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%lld %d %d %lld %d %d", &AH, &AM, &AS, &BH, &BM, &BS);
		S = AS + BS;
		if (S > 60)
		{
			S = S - 60;
			i = i + 1;
		}
		M = AM + BM + i;
		if (M > 60)
		{
			M = M - 60;
			j = j + 1;
		}
		H = AH + BH + j;
		printf("%lld %d %d\n", H, M, S);
		H = 0;
		M = 0;
		S = 0;
		i = 0;
		j = 0;
	}
	return 0;
}
