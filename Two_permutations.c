#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        int ans;
        if(a==n||b==n)
            ans=(a==n&&b==n);
        else
            ans=(a+b<=n-2);
        printf(ans?"Yes\n":"No\n");
    }
    return 0;
}
