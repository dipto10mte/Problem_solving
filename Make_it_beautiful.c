#include<stdio.h>

int sort(int arr[],int n){
    int i,j,m=0,temp;
    for(i=1;i<n;i++){
        if(arr[i]>arr[m]){
            m=i;
        }
    }
    if(m!=0){
        temp=arr[0];
        arr[0]=arr[m];
        arr[m]=temp;
    }
    for(i=1;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n];
}
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        m=0;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=1;j<n;j++){
            if(b[j-1]==b[j])
                m++;
        }
        if(m==n-1)
            a[i]=0;
        else{
            a[i]=1;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}

