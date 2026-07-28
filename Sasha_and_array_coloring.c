#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}
void solve(){
    int n;
    if (scanf("%d",&n)!=1)
        return;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
