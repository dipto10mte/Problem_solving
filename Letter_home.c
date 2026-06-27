#include <stdio.h>
#include <stdlib.h>
int abs_val(int x){
    return x < 0 ? -x : x;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n,s;
        scanf("%d %d",&n,&s);
        int *x=malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
            scanf("%d", &x[i]);
        int range=x[n-1]-x[0];
        int to_left =abs_val(s - x[0]);
        int to_right=abs_val(s - x[n-1]);
        int ans=range+min_val(to_left,to_right);
        printf("%d\n",ans);
        free(x);
    }
    return 0;
}
