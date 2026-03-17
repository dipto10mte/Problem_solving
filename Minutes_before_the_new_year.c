#include<stdio.h>
int main()
{
    int h,i,m,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&h,&m);
        a[i]=(23-h)*60+60-m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
