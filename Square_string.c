#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t;
    char b[101];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",b);
        if(strlen(b)%2==1)
            a[i]=0;
        else{
            a[i]=1;
            k=strlen(b)/2;
            for(j=0;k<strlen(b);j++,k++){
                if(b[j]!=b[k]){
                    a[i]=0;
                    break;
                }
            }
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
