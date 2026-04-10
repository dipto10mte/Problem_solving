#include<stdio.h>

int check(int arr[],int n){
    int i,m=0;
    for(i=0;i<=n;i++){
        if(m==arr[i])
            return 0;
        m+=arr[i];
    }
    return 1;
}

int swap(int arr[],int n){
    int i,m;
    for(i=1;i<=n;i++){
        m=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=m;
    }
}

int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        a[i]=check(b,n);
        if(a[i]==1){
            swap(b,n);
            a[i]=check(b,n);
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
