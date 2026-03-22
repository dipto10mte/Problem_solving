#include<stdio.h>
int main()
{
    int a,b,c,d,i,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d)
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
