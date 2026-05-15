#include<stdio.h>
int main()
{
    int a,b,c,d,i,t;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(c>a&&c>b&&d>a&&d>b)
            s[i]=0;
        else if(a>c&&a>d&&b>c&&b>d)
            s[i]=0;
        else
            s[i]=1;
    }
    for(i=0;i<t;i++){
        if(s[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
