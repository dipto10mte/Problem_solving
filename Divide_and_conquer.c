#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x%y==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
