#include<stdio.h>
int main()
{
    int a,b,c,i,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if(2*a>b+c+n||2*b>a+c+n||2*c>a+b+n)
            x[i]=0;
        else if((a+b+c+n)%3==0)
            x[i]=1;
        else
            x[i]=0;
    }
    for(i=0;i<t;i++){
        if(x[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
