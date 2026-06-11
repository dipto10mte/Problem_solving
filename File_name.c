#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l=0,m=0,n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    for(i=0;i<n;i++){
        if(a[i]=='x')
            l++;
        else{
            if(l>2){
                l-=2;
                m+=l;
            }
            l=0;
        }
    }
    if(l>2){
        l-=2;
        m+=l;
    }
    printf("%d",m);
    return 0;
}
