#include<stdio.h>
int main()
{
    int a[100],i,k,m,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        for(m=0,n=0;m<k;m++,n++){
            if(n%3==0||n%10==3)
                m--;
        }
        a[i]=--n;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
