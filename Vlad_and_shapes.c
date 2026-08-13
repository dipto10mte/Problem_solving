#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char g[20];
        int c[20],k=0;
        for(int i=0;i<n;i++){
            scanf("%s",g);
        int x=0;
        for(int j=0;j<n;j++)if(g[j]=='1')
            x++;
        if(x>0)
            c[k++]=x;
        }
        if(k>1&&c[0]!=c[1])
            printf("TRIANGLE\n");
        else
            printf("SQUARE\n");
    }
return 0;
}
