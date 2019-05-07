#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int lchild=0,rchild=0,parent=0;
    printf("请输入左孩子值和右孩子值\n");
    scanf("%d %d",&lchild,&rchild);
    for(i=1; i<8; i++)
    {
        printf("左孩子值为%d,右孩子值为%d\n",lchild,rchild);
        parent=lchild+rchild;
        rchild=parent;
        if(i!=7)
        {
            printf("%然后父母值为%d,为下一个右孩子值,请输入下一个左孩子值\n",parent);
            scanf("%d",&lchild);
        }
    }
    printf("%d为根节点",rchild);
    printf("哈夫曼树为:\n");
    printf("  100\n29   71\n   23  48\n     14  34\n       11  23\n          8  15\n            7  8\n              3 5\n");
    return 0;
}
