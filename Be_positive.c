#include<stdio.h>
int main()
{
    int a,i,j,n,o,p,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        o=p=0;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a==0)
                o++;
            else if(a==-1)
                p++;
        }
        b[i]=o;
        if(p%2==1)
            b[i]+=2;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
