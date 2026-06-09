#include<stdio.h>
int main()
{
    int a[5],i,j,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        for(j=0;j<5;j++){
            if(j==2)
                continue;
            scanf("%d",&a[j]);
        }
        a[2]=a[1]+a[0];
        if(a[1]+a[2]==a[3]){
            if(a[2]+a[3]==a[4])
                b[i]=3;
            else
                b[i]=2;
        }
        else
            b[i]=1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
