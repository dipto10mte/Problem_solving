#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    char d[]={'T','i','m','u','r','\0'};
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n+1];
        scanf("%s",b);
        int c[5]={0};
        if(n!=5)
            a[i]=0;
        else{
            for(j=0;j<5;j++){
                for(k=0;k<5;k++){
                    if(b[j]==d[k])
                        c[k]++;
                }
            }
        }
        if(c[0]==1&&c[1]==1&&c[2]==1&&c[3]==1&&c[4]==1)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
