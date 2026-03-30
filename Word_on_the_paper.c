#include<stdio.h>
int main()
{
    int i,j,m,n=0,t;
    char b[64000],c;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        m=n;
        for(j=0;j<64;j++){
            scanf(" %c",&c);
            if(c!='.'){
                b[n]=c;
                n++;
            }
        }
        a[i]=n-m;
    }
    n=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,n++)
            printf("%c",b[n]);
        printf("\n");
    }
    return 0;
}
