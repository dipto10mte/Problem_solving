#include<stdio.h>
int main()
{
    int i,t;
    char b[4];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",b);
        if(b[0]=='a'||b[1]=='b'||b[2]=='c')
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
