
#include <stdio.h>

int main()
{
	int tmp, cnt, sum;
	for (int i = 1; i <= 1000000; ++i)
	{
		tmp = i;
		cnt = 0;
		while (tmp)
		{
			++cnt;
			tmp /= 10;
		}
		int ok = 1;
		for (int j = i - cnt * 9; j < i; ++j)
		{
			if (j <= 0) continue;
			tmp = j;
			sum = 0;
			while (tmp)
			{
				sum += tmp % 10;
				tmp /= 10;
			}
			if (j + sum == i)
			{
				ok = 0;
				break;
			}
		}
		if (ok) printf("%d\n", i);
	}
}