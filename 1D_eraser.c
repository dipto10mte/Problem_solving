#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        char b[n+1];
        scanf("%s",b);
        a[i]=0;
        for(j=0;j<n;j++){
            if(b[j]=='B'){
                j+=k-1;
                a[i]++;
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
