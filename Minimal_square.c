#include<stdio.h>
int main()
{
    int a,b,i,t,x,y;
    scanf("%d",&t);
    int z[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a<b){
            x=a;
            y=b;
        }
        else{
            x=b;
            y=a;
        }
        if(2*x>=y)
            z[i]=4*x*x;
        else
            z[i]=y*y;
    }
    for(i=0;i<t;i++)
        printf("%d\n",z[i]);
    return 0;
}

