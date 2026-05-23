#include<stdio.h>
int main()
{
    int i,m=0,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0)
            m++;
    }
    printf("%d",m);
    return 0;
}
