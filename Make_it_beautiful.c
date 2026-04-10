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

    return 0;
}
