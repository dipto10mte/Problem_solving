#include<stdio.h>

int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        m=0;
        a[i]=0;
        for(j=0;j<n;j++){
            if(b[j]=='.')
                m++;
            else{
                if(m>2){
                    a[i]=2;
                    n=0;
                    break;
                }
                else
                    a[i]+=m;
                m=0;
            }
        }
        if(b[n-1]=='.'&&n!=0){
            if(m>2)
                a[i]=2;
            else
                a[i]+=m;
        }
    }

    for(i=0;i<t;i++)
        printf("%d\n",a[i]);

    return 0;
}
