#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int lchild=0,rchild=0,parent=0;
    printf("����������ֵ���Һ���ֵ\n");
    scanf("%d %d",&lchild,&rchild);
    for(i=1; i<8; i++)
    {
        printf("����ֵΪ%d,�Һ���ֵΪ%d\n",lchild,rchild);
        parent=lchild+rchild;
        rchild=parent;
        if(i!=7)
        {
            printf("%Ȼ��ĸֵΪ%d,Ϊ��һ���Һ���ֵ,��������һ������ֵ\n",parent);
            scanf("%d",&lchild);
        }
    }
    printf("%dΪ���ڵ�",rchild);
    printf("��������Ϊ:\n");
    printf("  100\n29   71\n   23  48\n     14  34\n       11  23\n          8  15\n            7  8\n              3 5\n");
    return 0;
}
