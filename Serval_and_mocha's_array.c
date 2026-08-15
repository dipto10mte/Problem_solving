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

}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while (t--)
        solve();
    return 0;
}
