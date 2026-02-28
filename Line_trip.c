#include<Stdio.h>
int main()
{
    int i,j,m,n,t,x;
    scanf("%d",&t);
    int p[t];
    for(i=0;i<t;i++)
    {
        m=0;
        scanf("%d %d",&n,&x);
        int q[n];
        for(j=0;j<n;j++)
            scanf("%d",&q[j]);
        if(n==1)
            m=q[0];
        else
        {
            for(j=1;j<n;j++){
                if(q[j]-q[j-1]>m)
                    m=q[j]-q[j-1];
            }
        }
        if((x-q[j-1])*2>m)
            p[i]=(x-q[j-1])*2;
        else
            p[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",p[i]);
    return 0;
}
