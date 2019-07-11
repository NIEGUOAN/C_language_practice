#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int a[51][6] = { 0 };
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				//把每个学生(一行)的成绩统计到本行的最后一个元素
				a[i][m] += a[i][j];
				//把每门课(一列)的成绩统计到本列的最后一个元素
				a[n][j] += a[i][j];
			}

		}
		for (int i = 0; i < n; i++)
		{
			double studentaverage= a[i][m] * 1.0 / m;
			printf("%.2lf", studentaverage);
			if (i < n - 1)
				cout << " ";
			else
				cout << endl;
		}

		double courseaverage[5];
		for (int i = 0; i < m; i++)
		{
			courseaverage[i] = a[n][i] * 1.0 / n;
			printf("%.2lf", courseaverage[i]);
			if (i < m - 1)
				cout << " ";
			else
				cout << endl;
		}

		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int flag = 1;
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] < courseaverage[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				count++;
		}
		cout << count << endl << endl;
	}
	return 0;
}