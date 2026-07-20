#include<stdio.h>
int compare(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}
void solve(){
    int n;
    scanf("%d",&n);
    int a[50];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    if(a[0]==a[n-1])
        printf("NO\n");
    else{
        printf("YES\n");
        if(a[0]==a[1]) {
            int temp=a[1];
            a[1]=a[n-1];
            a[n-1]=temp;
        }
        for(int i=0;i<n;i++)
            printf("%d%c",a[i],(i==n-1)?'\n':' ');
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}

