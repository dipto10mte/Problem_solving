#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n,t;
    scanf("%d",&t);
    int a[t];
    char e[t*20+1];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n+1];
        scanf("%s",b);
        scanf("%d",&m);
        char c[m+1],d[m+1];
        scanf("%s",c);
        scanf("%s",d);
        a[i]=m+n;
        l=0;
        for(j=0;j<m;j++){
            if(d[j]=='V')
                l++;
        }
        k+=l;
        for(j=0;j<m;j++){
            if(d[j]=='V'){
                e[k-1]=c[j];
                k--;
            }
        }
        k+=l;
        for(j=0;j<n;j++,k++)
            e[k]=b[j];
        for(j=0;j<m;j++){
            if(d[j]=='D'){
                e[k]=c[j];
                k++;
            }
        }
    }
    k=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%c",e[k]);
        printf("\n");
    }
    return 0;
}
