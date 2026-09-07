#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int rounds=0;
        while(1){
            if(a==b||b==c||a==c)
                break;
            int mx=a,mn=a;
            if(b>mx)
                mx=b;
            if(c>mx)
                mx=c;
            if(b<mn)
                mn=b;
            if(c<mn)
                mn=c;
            if(a==mx)
                a--;
            else if(b==mx)
                b--;
            else
                c--;
            if(a==mn)
                a++;
            else if
                (b==mn)b++;
            else
                c++;
            rounds++;
        }
        printf("%d\n",rounds);
    }
    return 0;
}
