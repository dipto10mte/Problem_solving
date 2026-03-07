#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t;
    char s[6]={'a','b','c','d','e','\0'};
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        if(n!=5){
            a[i]=0;
            continue;
        }
        else if(b='T','i','m','u','r')
            a[i]=1;
        else if(b='T','i','m','r','u')
            a[i]=1;
        else if(b='T','i','u','m','r')
            a[i]=1;
        else if(b='T','i','u','r','m')
            a[i]=1;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
