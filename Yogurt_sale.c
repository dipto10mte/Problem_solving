#include<stdio.h>
int main()
{
    int a,b,i,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&a,&b);
        if(b>2*a)
            x[i]=a*n;
        else {
            if(n%2==0)
                x[i]=b*n/2;
            else
                x[i]=b*(n/2)+a;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
