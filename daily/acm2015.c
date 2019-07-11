#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int i, num = 0, sum = 0, record1, record2, flag = 1;
		record1 = n / m;
		record2 = n % m;
		while (record1--)//n中有多少个m
		{
			for (i = 1; i <= m; i++)
			{
				num = num + 2;
				sum = sum + num;
			}
			if (flag == 1)
			{
				printf("%d", sum / m);
				flag = 0;
			}
			else
			{
				printf(" %d", sum / m);
			}
			sum = 0;
		}
		if (record2 != 0)
		{
			for (i = 1; i <= record2; i++)//剩余不足m个的个数
			{
				num = num + 2;
				sum = sum + num;
			}
			if (flag == 1)
				printf("%d", sum / record2);
			else
				printf(" %d", sum / record2);
		}
		printf("\n");
		num = 0;
	}
	return 0;
}
