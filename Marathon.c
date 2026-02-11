#include<Stdio.h>
int main()
{
    int a,b,c,d,i,m,n;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        m=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<b)
            m++;
        if(a<c)
            m++;
        if(a<d)
            m++;
        x[i]=m;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
