#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int n,count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            if(a>b)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
