#include<stdio.h>
int main()
{
    int i,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        while(n){
            o=n;
            n=n/10;
            m++;
        }
        a[i]=(m-1)*9+o;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
