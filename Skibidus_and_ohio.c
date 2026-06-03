#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char s[101];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",s);
        a[i]=strlen(s);
        for(j=1;j<a[i];j++){
            if(s[j-1]==s[j]){
                a[i]=1;
                break;
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
