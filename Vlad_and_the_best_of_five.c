#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    char b[6];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
            m=0,n=0;
        scanf("%s",b);
        if(b[0]=='A')
            m++;
        else
            n++;
        if(b[1]=='A')
            m++;
        else
            n++;
        if(b[2]=='A')
            m++;
        else
            n++;
        if(b[3]=='A')
            m++;
        else
            n++;
        if(b[4]=='A')
            m++;
        else
            n++;
        if(m>n)
            a[i]=1;
        else
            a[i]=2;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}
