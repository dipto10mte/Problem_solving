#include<stdio.h>
int main()
{
    int i,k,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&k);
        if(k%2==1)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
