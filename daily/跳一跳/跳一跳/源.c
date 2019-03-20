#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n,a, score = 0, flag = 0;
	scanf("%d ", &n);
	while(n--)
	{
		scanf("%d", &a);
		if (a == 1)
		{
			score = score + 1;//未跳到中心
			flag = 0;
		}
		else if (a == 2 && flag == 0)
		{
			score = score + 2; //第一次跳到中心或上次未跳到中心
			flag = 1;
		}
		else if (a == 2 && flag >= 1) 
		{
			flag = flag + 1; 
			score = score + flag * 2; //连续跳到中心,得分增加
		}
		else 
			break;
	}
	printf("%d\n", score);
	return 0;
}