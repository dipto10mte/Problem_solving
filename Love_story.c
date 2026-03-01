#include<stdio.h>
int main()
{
    int i,j,n,t;
    char a[11],b[]="codeforces";
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++){
        n=0;
        scanf("%s",a);
        for(j=0;j<10;j++){
            if(a[j]!=b[j])
                n++;
        }
        c[i]=n;
    }
    for(i=0;i<t;i++)
        printf("%d\n",c[i]);
    return 0;
}
