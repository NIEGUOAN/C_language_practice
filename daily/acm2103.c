#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	long long int T, M, N, baby, num, money = 0, flag = 0, i = 1;
	scanf("%lld", &T);
	while (T--)
	{
		money = 0;
		flag = 0;
		i = 1;
		scanf("%lld %lld", &M, &N);
		int tempm = M;
		int tempn = N;
		if (N <= M)//没有超过生育限制
		{
			while (tempn--)
			{
				scanf("%lld", &baby);
				if (baby == 0 && flag == 0)
					continue;
				else if (baby == 1 && flag == 0)
					flag = 1;
				else if (flag == 1)
				{
					money = money + 1 * i;
					i = i * 2;
				}
			}
		}
		else if (N > M)//超过生育限制,num为超出个数	
		{
			while (tempm--)
			{
				scanf("%lld", &baby);
				if (baby == 0 && flag == 0)
					flag = 0;
				else if (baby == 1 && flag == 0)
					flag = 1;
				else if (flag == 1)
				{
					money = money + 1 * i;
					i = i * 2;
				}
			}
			num = N - M;
			while (num--)
			{
				scanf("%lld", &baby);
				money = money + 1 * i;
				i = i * 2;
			}
		}
		if (money == 0)
			printf("%lld RMB\n", money);
		else
			printf("%lld0000 RMB\n", money);
	}
	return 0;
}