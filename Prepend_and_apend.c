#include<stdio.h>
int main()
{
    int i,j,t,m,n;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=n;
        char a[n];
        scanf("%s",a);
        if(n%2==1&&a[n/2]=='0')
            m--;
        for(j=0;j<n/2;j++){
            if(a[n-1-j]=='1'&&a[j]=='0')
                m-=2;
            else if(a[n-1-j]=='0'&&a[j]=='1')
                m-=2;
        }
        b[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
