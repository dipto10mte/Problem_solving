#include<stdio.h>
int main()
{
    int i,m,t;
    scanf("%d",&t);
    int a[3*t];
    for(i=0;i<3*t;i+=3){
        scanf("%d %d %d",&a[i],&a[i+1],&a[i+2]);
        m=a[i];
        if(m<a[i+1])
            m=a[i+1];
        if(m<a[i+2])
            m=a[i+2];
        a[i]=m-a[i];
        a[i+1]=m-a[i+1];
        a[i+2]=m-a[i+2];
        if((a[i]==0&&a[i+1]==0)||(a[i+1]==0&&a[i+2]==0)||(a[i]==0&&a[i+2]==0)){
            a[i]++;
            a[i+1]++;
            a[i+2]++;
        }

    }
    for(i=0;i<3*t;i+=3)
        printf("%d %d %d\n",a[i],a[i+1],a[i+2]);
    return 0;
}
