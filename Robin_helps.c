#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a[n];
        l=m=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]==0&&l!=0){
                l--;
                m++;
            }
            else if(a[j]>=k)
                l+=a[j];
        }
        b[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
