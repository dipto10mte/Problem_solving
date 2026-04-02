#include<stdio.h>
int main()
{
    int i,j,m,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++){
            scanf("%d %d",&x,&y);
            if(x<=10&&m<y){
                m=y;
                a[i]=j+1;
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
