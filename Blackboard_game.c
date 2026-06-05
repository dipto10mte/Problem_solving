#include<stdio.h>
int main()
{
    int a,b,i,n,t;
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%4==0)
            c[i]=1;
        else
            c[i]=0;
    }

    return 0;
}
