#include<stdio.h>
int main()
{
    int h,i,m,n,t,w;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&w,&h,&n);
        m=1;
        while(w%2==0){
            m=m*2;
            w=w/2;
        }
        while(h%2==0){
            m=m*2;
            h=h/2;
        }
        if(m<n)
            a[i]=0;
        else
            a[i]=1;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
