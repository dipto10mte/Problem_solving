#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char s[51],t[51];
    scanf("%s",s);
    scanf("%s",t);
    for(i=0;i<strlen(t);i++){
        if(t[i]==s[j])
            j++;
    }
    printf("%d",j+1);
    return 0;
}
