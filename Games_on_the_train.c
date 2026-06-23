#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int mn=1e9,mx=0;
        for (int i=0;i<n;i++) {
            int h;
            scanf("%d",&h);
            if (h<mn)
                mn=h;
            if (h>mx)
                mx=h;
        }
        printf("%d\n", mx - mn + 1);
    }
    return 0;
}
