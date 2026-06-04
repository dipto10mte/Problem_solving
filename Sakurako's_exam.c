#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a%2==1)
            c[i]=0;
        else if(b%2==0)
            c[i]=1;
        else if(a>0)
            c[i]=1;
        else
            c[i]=0;
    }
    for(i=0;i<t;i++){
        if(c[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
