#include<stdio.h>
int main()
{
    int i,t,x,x1,x2,x3,x4,y,y1,y2,y3,y4;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        scanf("%d %d",&x4,&y4);
        if(x1==x2){
            if(y1>y2)
                y=y1-y2;
            else
                y=y2-y1;
        }
        else if(x1==x3){
            if(y1>y3)
                y=y1-y3;
            else
                y=y3-y1;
        }
        else{
            if(y1>y4)
                y=y1-y4;
            else
                y=y4-y1;
        }
        if(y1==y2){
            if(x1>x2)
                x=x1-x2;
            else
                x=x2-x1;
        }
        else if(y1==y3){
            if(x1>x3)
                x=x1-x3;
            else
                x=x3-x1;
        }
        else{
            if(x1>x4)
                x=x1-x4;
            else
                x=x4-x1;
        }
        a[i]=x*y;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
