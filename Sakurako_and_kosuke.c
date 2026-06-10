#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==1)
            a[i]=0;
        else
            a[i]=1;
    }
    for(i=0;i<t;i++){
        if(a[i])
            printf("Sakurako\n");
        else
            printf("Kosuke\n");
    }
    return 0;
}
