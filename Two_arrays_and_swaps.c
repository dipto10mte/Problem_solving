#include<stdio.h>

void sorting(int arr[],int n){
    int i,j,x;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
}
int main()
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int b[n],c[n];
        a[i]=0;
        l=n-1;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n;j++)
            scanf("%d",&c[j]);
        sorting(b,n);
        sorting(c,n);
        for(j=0;j<k;j++,l--){
            if(c[j]>b[l])
                b[l]=c[j];
        }
        for(j=0;j<n;j++)
            a[i]+=b[j];
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}

