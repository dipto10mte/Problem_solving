#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int c,i,j=0,k;
    char x;
    scanf("%s",a);
    c=strlen(a);
    for(i=0;i<c;i+=2)
    {
            b[j]=a[i];
            j++;
    }
    for(i=0;i<j;i++)
    {
        for(k=0;k<j-i-1;k++)
        {
            if(b[k]>b[k+1])
            {
                x=b[k];
                b[k]=b[k+1];
                b[k+1]=x;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        if(i==j-1)
        {
            printf("%c",b[i]);
        }
        else
        {
            printf("%c%c",b[i],'+');
        }
    }
    return 0;
}
