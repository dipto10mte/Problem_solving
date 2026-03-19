#include<stdio.h>
int main()
{
    int i,j,k,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        a[i]=1;
        for(j=0;j<n;j++){
            for(k=j+2;k<n;j++){
                if(b[k]==b[j]){
                    a[i]=0;
                    break;
                }
            }
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
