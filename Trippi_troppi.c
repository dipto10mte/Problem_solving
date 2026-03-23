#include<stdio.h>
int main()
{
    int i,t;
    char b[11],c[11],d[11];
    scanf("%d",&t);
    char a[3*10];
    for(i=0;i<3*t;i+=3){
        scanf("%s %s %s",b,c,d);
        a[i]=b[0];
        a[i+1]=c[0];
        a[i+2]=d[0];
    }
    for(i=0;i<3*t;i+=3)
        printf("%c%c%c\n",a[i],a[i+1],a[i+2]);
    return 0;
}
