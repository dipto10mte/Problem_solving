#include<stdio.h>
int main()
{
    int i,j,m,n,s,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&s,&m);
        int b[2*n+2];
        b[0]=a[i]=0;
        for(j=1;j<=2*n;j+=2)
            scanf("%d %d",&b[j],&b[j+1]);
        b[2*n+1]=m;
        for(j=0;j<2*n+2;j+=2){
            if(s<=b[j+1]-b[j]){
                a[i]=1;
                break;
            }
        }
    }
    for(i=0;i<t;i++){
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
