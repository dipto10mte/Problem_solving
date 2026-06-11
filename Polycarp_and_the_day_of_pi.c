#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char m[31]="3141592653589793238462643383279",n[31];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",n);
        for(j=0;j<strlen(n);j++){
            if(m[j]!=n[j])
                break;
        }
        a[i]=j;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
