#include<stdio.h>
void solve(){
    long long a,b,c,x,y;
    if (scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&x,&y)!=5)
        return;
    long long req_dog=(x>a)?(x-a):0;
    long long req_cat=(y>b)?(y-b):0;
    if(c>=req_dog+req_cat)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
