#include<stdio.h>
#include<string.h>
int main()
{
    int a[26]={0},i,n=0;
    char s[1001];
    fgets(s,sizeof(s),stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']=1;
                n++;
            }
        }
    }
    printf("%d",n);
    return 0;
}
