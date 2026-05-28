#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=1;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            a[j]=a[j]+a[j-1];
        }
    }
    printf("%d",a[n-1]);
    return 0;
}
