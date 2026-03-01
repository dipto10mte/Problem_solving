#include<stdio.h>
int main()
{
    int i,n,p,q,x,y;
    scanf("%d",&n);
    x=4;
    y=n-4;
    while(x){
        p=0,q=0;
        for(i=2;i<x;i++){
            if(x%i==0)
                p++;
        }
        for(i=2;i<y;i++){
            if(y%i==0)
                q++;
        }
        if(p>0&&q>0){
            break;
        }
        x++;
        y--;
    }
    printf("%d %d",x,y);
    return 0;
}
