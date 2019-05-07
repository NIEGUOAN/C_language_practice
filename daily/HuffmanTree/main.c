#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int weight;
    int parent,lchild,rchild;
}HNode,*HuffmanTree;

void CreateHuffmanTree(HuffmanTree *HT,int n)
{
    if(n<=1)
    return;
    m=2*n-1;
    HT=(HNode*)malloc(sizeof(HNode)*m);
    for(i=1;i<=m;++i)
    {
        HT[i].parent=;
        HT[i].lchild=0;
        HT[i].rchild=0;
    }
    for(i=1;i<=n;++i)
    {
        scanf("%d",HT[i].weight);
    }
    for(i=n+1;i<=n;++i)
    {
        Select(HT,i-1,s1,s2);
        HT[s1].parent=i;
        HT[s2].parent=i;
        HT[i].lchild=s1;
        HT[i].rchild=s2;
        HT[i].weight=HT[s1].weight+HT[s2].weight;
    }
}

void CreatHuffmanCode(HuffmanTree HT,HuffmanCode *HC,int n)
{
    HC=(char*)malloc(sizeof(char)*(n+1));
    cd=(char*)malloc(sizeof(char));
    cd[n-1]='\0';
    for(i=1;i<=n;++i)
    {
        stare=n-1;
        c=i;
        f=HT[i].parent;
        while(f!=0)
        {
            --start;
            if(HT[f].lchild==c)
            cd[start]='0';
            else cd[start]='1';
            c=f;
            f=HT[f].parent;
        }
        HC[i]=(char*)malloc(sizeof(char)*(n-start));
        strcpy(HC[i],&cd[start]);
    }
    free(cd);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
