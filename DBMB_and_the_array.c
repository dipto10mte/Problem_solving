#include<stdio.h>
int main()
{
    int b,i,m,n,s,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&s,&x);
        a[i]=m=0;
        while(n--){
            scanf("%d",&b);
            m+=b;
        }
        if((s-m)%x==0&&m<=s)
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
