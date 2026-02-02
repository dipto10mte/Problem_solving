#include<stdio.h>
int main()
{
    int i,k,l,m,n,d,x=0;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&d);
    int a[d];
    for(i=0;i<d;i++)
    {
        a[i]=1;
    }
    for(i=k-1;i<d;i+=k)
    {
        a[i]=0;
    }
    for(i=l-1;i<d;i+=l)
    {
        a[i]=0;
    }
    for(i=m-1;i<d;i+=m)
    {
        a[i]=0;
    }
    for(i=n-1;i<d;i+=n)
    {
        a[i]=0;
    }
    for(i=0;i<d;i++)
    {
        if(a[i]==0)
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
