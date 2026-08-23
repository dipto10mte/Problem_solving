#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    int x,y,z;
    if(n%3==0){
        x=n/3+1;
        y=n/3;
        z=n/3-1;
    }
    else if(n%3==1){
        x=n/3+2;
        y=n/3;
        z=n/3-1;
    }

int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
