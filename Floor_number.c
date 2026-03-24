#include<stdio.h>
int main()
{
    int i,j,m,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&x);
        m=2;
        j=1;
        while(m){
            if(n<=m){
                a[i]=j;
                break;
            }
            m+=x;
            j++;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
