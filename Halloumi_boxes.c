#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        int b[n],c=0;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        if(k>1||n==1)
            a[i]=1;
        else if(k==1){
            for(j=1;j<n;j++){
                if(b[j-1]>b[j]){
                    c=1;
                    break;
                }
            }
            if(c==1)
                a[i]=0;
            else
                a[i]=1;
        }
        else
            a[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
