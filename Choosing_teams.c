#include<stdio.h>
int main()
{
    int a,i,k,n,p=0,q=0,r=0,s=0,t=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a==4)
            p++;
        else if(a==3)
            q++;
        else if(a==2)
            r++;
        else if(a==1)
            s++;
        else if(a==0)
            t++;
    }
    if(k==5)
        p=q=r=s=0;
    else if(k==4)
        p=q=r=0;
    else if(k==3)
        p=q=0;
    else if(k==2)
        p=0;
    a=(p+q+r+s+t)/3;
    printf("%d",a);
    return 0;
}
