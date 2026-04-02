#include<stdio.h>
int main()
{
    int i,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        if(n%k==0)
            a[i]=1;
        else if(n%2==0&&k%2==0)
            a[i]=1;
        else if(n%2==1&&k%2==1)
            a[i]=1;
        else if(n%2==0&&k%2==1&&n>2*k)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
