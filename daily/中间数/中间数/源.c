#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct t {
	int value;
	int small;
	int large;
};


int main()
{
	int i, j, n, small=0, large=0;
	scanf("%d", &n);
	struct t* b = (struct t*)malloc(n * sizeof(struct t));
	memset(b, 0, n * sizeof(struct t));
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i].value);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (b[i].value > b[j].value)
				b[i].small++;
			else if (b[i].value < b[j].value)
				b[i].large++;
	}
	int found = 0;
	for(int i=0;i<n;i++)
		if (b[i].large == b[i].small)
		{
			printf("%d\n", b[i].value);
			found = 1;
			break;
		}
	if (!found)
		printf("-1\n");
	return  0;
}

/*
定义一个有n个数的数组
排序,一一比较
若该数大于那个数,则large=large+1;
若该数小于那个数,则small=small+1;
最后看large=small?
若相等,则输出那个数a[i],若不等,输出-1
*/