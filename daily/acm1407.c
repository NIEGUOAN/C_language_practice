#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, y, z, num, flag;
	while (scanf("%d", &num) ==1)
	{
		flag = 0;
		for (x = 1; x < 100; x++)
		{
			for (y = 1; y < 100; y++)
			{
				for (z = 1; z < 100; z++)
				{
					if (x * x + y * y + z * z == num)
					{
						printf("%d %d %d\n", x, y, z);
						flag = 1;
						break;
					}
				}
				if (flag)
					break;
			}
			if (flag)
				break;
		}
	}
	return 0;
}