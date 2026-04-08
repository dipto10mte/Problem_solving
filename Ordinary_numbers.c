#include<stdio.h>
int main()
{
    int i,j,k,m,t;
    long long int n,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        x=0;
        m=0;
        for(j=0;j<=9;j++){
            x=x*10+1;
            for(k=1;k<=9;k++){
                y=x*k;
                if(y<=n)
                    m++;
            }
        }
        a[i]=m;
    }

    return 0;
}
