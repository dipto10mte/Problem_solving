#include<stdio.h>
int main()
{
    int i,j,l,m,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        l=0;
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(j%2==0&&a[j]%2!=0)
                l++;
            else if(j%2!=0&&a[j]%2==0)
                m++;
        }
        if(l==m)
            b[i]=l;
        else
            b[i]=-1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
