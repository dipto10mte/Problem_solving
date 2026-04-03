#include<stdio.h>
int main()
{
    int i,j,l,r,t;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<2*t;i+=2){
        scanf("%d %d",&l,&r);
        a[i]=0;
        a[i+1]=0;
        for(j=l;j<=r;j++){
            if(r%j==0){
                a[i]=j;
                break;
            }
        }
        for(j=a[i]+1;j<=r;j++){
            if(r%j==0){
                a[i+1]=j;
                break;
            }
        }
        if(a[i]==0||a[i+1]==0){
            a[i]=-1;
            a[i+1]=-1;
        }
    }
    for(i=0;i<2*t;i+=2)
        printf("%d %d\n",a[i],a[i+1]);
    return 0;
}
