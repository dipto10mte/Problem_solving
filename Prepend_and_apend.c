#include<stdio.h>
int main()
{
    int i,j,t,m,n;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=n;
        char b[n+1];
        scanf("%s",b);
        for(j=0;j<n/2;j++){
            if(b[n-1-j]=='1'&&b[j]=='0')
                m-=2;
            else if(b[n-1-j]=='0'&&b[j]=='1')
                m-=2;
            else
                break;
        }
        a[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
