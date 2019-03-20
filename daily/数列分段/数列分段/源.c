#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int page = 1, n,i,last,now;
	scanf("%d", &n);
	scanf("%d", &now);
	last = now;
	for (i = 1; i < n; i++)
	{
		scanf("%d", &now);
		if (now == last)
			continue;
		else
			page = page + 1;
		last = now;
	}
	printf("%d", page);
	return 0;
}

/*
定义page=0为段落数,n为整数个数
输入整数个数n
依次输入数据
输入下一个数据判断是否和前个数据相等
若不相等,则page=page+1;否则继续输入
输出page值
*/