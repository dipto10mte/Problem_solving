#include<stdio.h>
int main()
{
    int i,j,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        x=0;
        y=0;

        for(j=0;j<n;j++){
            if(b[j]=='R')
                x++;
            else if(b[j]=='L')
                x--;
            else if(b[j]=='U')
                y++;
            else
                y--;
            if(x==1&&y==1)
                a[i]=1;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
