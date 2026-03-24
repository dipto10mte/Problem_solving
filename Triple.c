#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[10]={0};
        int c,d=10;
        a[i]=-1;
        for(j=0;j<n;j++){
            scanf("%d",&c);
            b[c]++;
        }
        while(d--){
            if(b[d]>2){
                a[i]=d;
                break;
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
