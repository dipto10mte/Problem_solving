#include<stdio.h>
int main()
{
    int i,j,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        for(j=0;j<n;j++){
            if(b[j]=='B'){
                m=j;
                break;
            }
        }
        while(n--){
            if(b[n]=='B'){
                o=n;
                break;
            }
        }
        a[i]=o-m+1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
