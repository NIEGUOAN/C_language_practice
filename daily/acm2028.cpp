#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
	long long int m, gbs = 1, n;//最小公倍数初始化为1
	while (cin >> n)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m;
			if (j == 0)
				gbs = m;
			else
			{
				for (int i = gbs; i <= gbs * m; i++)
				{
					if (i % gbs == 0 && i % m == 0)
					{
						gbs = i;
						break;
					}
				}
			}
		}
		cout << gbs << endl;
	}
	return 0;
}