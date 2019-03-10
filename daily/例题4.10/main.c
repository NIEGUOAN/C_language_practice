#include <stdio.h>
int main()
{
    int c,s;
    float p,w,d=0,f;
    printf("please enter price,weight,discount:");//提示输入的数据
    scanf("%f,%f,%d",&p,&w,&s);                   //输入单价,重量,距离
    if(s>=3000)
        c=12;                             //3000km以上为同一折扣
    else
        c=s/250;                          //3000km以下各段折扣不同,c的值不相同
    switch(c)
    {
case0:
        d=0;
        break;                         //c=0,代表250km以下,折扣d=0
case1:
        d=2;
        break;                         //c=1,代表250~500km以下,折扣d=2%
case2:
case3:
        d=5;
        break;                         //c=2和3,代表500~1000km,折扣d=5%
case4:
case5:
case6:
case7:
        d=8;
        break;                         //c=4~7,代表1000~2000km,折扣d=8%
case8:
case9:
case10:
case11:
        d=10;
        break;                       //c=8~11,代表2000~3000km,折扣d=10%
case12:
        d=15;
        break;                       //c=12,代表3000km以上,折扣d=15%
    }
    f=p*w*s*(1-d/100);                              //计算总运费
    printf("freight=%10.2f\n",f);                 //输出总运费，取两位小数
    return 0;
}
