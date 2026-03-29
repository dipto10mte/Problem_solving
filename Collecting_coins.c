#include<stdio.h>
int main()
{
    int a,b,c,i,m,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&n);
        a=a+b+c+n;
        b=0;
        while(a>0){
            c=a%10;
            b+=c;
            a=a/10;
        }
        if(b%3==0)
            x[i]=1;
        else
            x[i]=0;
    }
    for(i=0;i<t;i++){
        if(x[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
