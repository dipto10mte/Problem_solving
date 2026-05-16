#include<stdio.h>
int main()
{
    int i,j,l,m,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        m=0;
        l=0;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        x=b[0];
        for(j=1;j<n;j++){
                if(b[j]!=x){
                    y=b[j];
                    break;
                }
        }
        for(j=0;j<n;j++){
                if(b[j]!=x&&b[j]!=y){
                        m++;
                }
        }
        if(m>0)
            a[i]=0;
        else{
            for(j=0;j<n;j++){
                if(b[j]==x)
                    m++;
                else
                    l++;
            }
            if(m==l||m-l==1||l-m==1||l==0||m==0)
                a[i]=1;
            else
                a[i]=0;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
