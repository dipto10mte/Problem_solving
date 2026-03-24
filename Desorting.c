#include<stdio.h>
int main()
{
    int c,d,i,j,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        c=1;
        d=1000;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                b[i]=0;
                c=0;
                break;
            }
        }
        if(c){
            for(j=0;j<n-1;j++){
                if(d>(a[j+1]-a[j]))
                    d=a[j+1]-a[j];
            }
            b[i]=d/2+1;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
