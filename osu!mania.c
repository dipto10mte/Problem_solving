#include<stdio.h>
int main()
{
    int b[50000],i,j,m=0,n,o,p,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        p=m;
        char c[4*n];
        for(j=0;j<4*n;j++)
            scanf(" %c",&c[j]);
        while(j--){
            if(c[j]=='#'){
                if(j%4==3){
                    b[m]=4;
                }
                else if(j%4==2){
                    b[m]=3;
                }
                else if(j%4==1){
                    b[m]=2;
                }
                else
                    b[m]=1;
                m++;
            }
        }
        a[i]=m-p;
    }
    m=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,m++)
            printf("%d ",b[m]);
        printf("\n");
    }
    return 0;
}
