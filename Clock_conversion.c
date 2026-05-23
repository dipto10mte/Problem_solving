#include<stdio.h>
int main()
{
    int i,j,t;
    char c;
    scanf("%d",&t);
    int a[2*t],b[t];
    for(i=0,j=0;i<2*t;i+=2,j++){
        scanf("%d%c%d",&a[i],&c,&a[i+1]);
        if(a[i]<12)
            b[j]=1;
        else
            b[j]=0;
        if(a[i]==00)
            a[i]=12;
        else if(a[i]>12)
            a[i]-=12;
    }
    for(i=0,j=0;i<2*t;i+=2,j++){
        if(a[i]<10)
            printf("0%d",a[i]);
        else
            printf("%d",a[i]);
        printf(":");
        if(a[i+1]<10)
            printf("0%d",a[i+1]);
        else
            printf("%d",a[i+1]);
        if(b[j]==1)
            printf(" AM\n");
        else
            printf(" PM\n");
    }
    return 0;
}
