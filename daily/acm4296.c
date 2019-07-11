/*贪心4296
思路: 把PDVi的计算方式变形为：PDVi=S-(Wi+Si),
其中S为当前所有楼层的总重量。考虑最底下的一个楼层，
若要得到最小的PDVi，则需选择(Wi+Si)值最大的一个楼层放置在此。
其他往上逐层,依此类推。---贪心策略：找Max( (wi+si) )

*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int w, s;
	int sum; /* w+s */
}p[100002];

/*写法1
int cmp(const void * a, const void * b){
	struct node * aa = (struct node *) a;
	struct node * bb = (struct node *) b;
  return bb->sum - aa->sum; //倒序
}*/

/*写法2
int cmp(struct node * a, struct node * b){
	 return b->sum - a->sum; //倒序
}
*/

int cmp(struct node a, struct node b)
{
	return b.sum - a.sum; /* 倒序 */
}

int main()
{
	/*文件输入,输出
	freopen("din.txt","r",stdin);//文件输入
	freopen("out.txt","w",stdout);//文件输出  */

	int n, i;
	while (scanf("%d", &n) == 1)
	{

		__int64 s = 0; /*当前进行贪心决策时的所有楼层的总重量*/

		/* 输入，并求出所有楼层的总重量s */
		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &p[i].w, &p[i].s);
			p[i].sum = p[i].w + p[i].s;
			s += p[i].w;
		}

		/* 做优先队列----贪心策略:p[i].sum最大 */
		qsort(p, n, sizeof(p[0]), cmp);

		/* 求所有"正值PDV"中的最大值，PDVi= s-(wi+si) */
		__int64 ans = 0;
		for (i = 0; i < n; i++)
		{
			s -= p[i].w; /*∑(wj) ---下次决策时的总重量 */
			__int64 tmp = s - p[i].s;
			if (tmp > 0)
				ans = ans > tmp ? ans : tmp;
		}
		printf("%I64d\n", ans);

	}

	/*关闭文件流
	fclose(stdin);
	fclose(stdout); */

	return 0;
}
