#include<stdio.h>
#include<stdbool.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
void solve(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    bool possible=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(a[i],a[j])<=2){
                possible=true;
                break;
            }
        }
        if(possible)
            break;
    }
    if(possible)
        printf("Yes\n");
    else
        printf("No\n");
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while (t--)
        solve();
    return 0;
}
