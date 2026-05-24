#include<stdio.h>
int main()
{
    int a,b,i,j,m,n,t;
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&n);
        m=0;
        j=1;
        while(a<=n&&b<=n){
            if(a<b)
                a+=b;
            else
                b+=a;
            m++;
        }
        c[i]=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",c[i]);
    return 0;
}
