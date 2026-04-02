#include<stdio.h>
int main()
{
    int i,j,t,x,y,z;
    scanf("%d",&t);
    char a[t],b[4];
    for(i=0;i<t;i++){
        x=0,y=0,z=0;
        for(j=0;j<3;j++){
            scanf("%s",b);
            if(b[0]=='?'||b[1]=='?'||b[2]=='?'){
                if(b[0]=='A'||b[1]=='A'||b[2]=='A')
                x++;
                if(b[0]=='B'||b[1]=='B'||b[2]=='B')
                y++;
                if(b[0]=='C'||b[1]=='C'||b[2]=='C')
                z++;
                if(x==0)
                    a[i]='A';
                else if(y==0)
                    a[i]='B';
                else
                    a[i]='C';
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%c\n",a[i]);
    return 0;
}
