#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int sum(int a, int b)//数字a转换成b进制后各位数字的和的函数
{
	int num = 0;
	while (a)
	{
		num = num + a % b;
		a = a / b;
	}
	return num;
}

int main()
{
	for (int i = 2992; i < 10000; i++)
	{
		if (sum(i, 10) == sum(i, 12) && sum(i, 12) == sum(i, 16))
			printf("%d\n", i);
	}
	return 0;
}
