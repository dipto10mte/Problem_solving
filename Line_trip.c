#include<Stdio.h>
int main()
{
    int i,j,m,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&x);
        int b[n];
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        m=b[0];
        if(b==1){}
        else
        {
            for(j=1;j<n;j++){
                if(b[j]-b[j-1]>m)
                    m=b[j]-b[j-1];
            }
        }
        if((x-b[j-1])*2>m)
            a[i]=(x-b[j-1])*2;
        else
            a[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
