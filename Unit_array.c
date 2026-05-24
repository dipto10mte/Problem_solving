#include<stdio.h>
int main()
{
    int a,i,j,m,n,o,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        b[i]=m=o=0;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a==1)
                m++;
            else
                o++;
        }
        if(o%2==1){
            m++;
            o--;
            b[i]++;
        }
        while(o>m){
            m+=2;
            o-=2;
            b[i]+=2;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
