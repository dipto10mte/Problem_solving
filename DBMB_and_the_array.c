#include<stdio.h>
int main()
{
    int b,i,m,n,s,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&s,&x);
        m=0;
        while(n--){
            scanf("%d",&b);
            m+=b;
        }
        if(m<=s){
            if((s-m)%x==0)
                a[i]=1;
            else
                a[i]=0;
        }
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
