#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        char c[n+1];
        int b[7]={0};
        a[i]=0;
        scanf("%s",c);
        for(j=0;j<n;j++){
            if(c[j]=='A')
                b[0]++;
            else if(c[j]=='B')
                b[1]++;
            else if(c[j]=='C')
                b[2]++;
            else if(c[j]=='D')
                b[3]++;
            else if(c[j]=='E')
                b[4]++;
            else if(c[j]=='F')
                b[5]++;
            else
                b[6]++;
        }
        for(j=0;j<7;j++){
            if(b[j]<m)
                a[i]+=(m-b[j]);
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
