#include<stdio.h>
int main()
{
    int a,b,c,i,t,x[1000]={0};
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>=10||b+c>=10||c+a>=10)
            x[i]=1;
    }
    for(i=0;i<t;i++)
    {
        if(x[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
