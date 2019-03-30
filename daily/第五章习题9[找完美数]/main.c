#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,s,i;
    for(m=2; m<1000; m++)
    {
        s=0;
        for(i=1; i<m; i++)
            if((m%i)==0)
                s=s+i;//i为m的因式,如6的因式为1,2,3,6
        if(s==m)//完数条件
        {
            printf("%d,its factors are",m);
            for(i=1; i<m; i++)
                if(m%i==0)
                    printf("%d ",i);//输出所有因式
            printf("\n");
        }
    }
    return 0;
}
