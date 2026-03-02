#include<stdio.h>
int main()
{
    int i,t,x,y,z;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&z);
        if(x<y&&y<z)
            a[i]=1;
        else if(x<y&&y>z)
            a[i]=2;
        else
            a[i]=3;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("STAIR\n");
        else if(a[i]==2)
            printf("PEAK\n");
        else
            printf("NONE\n");
    }
    return 0;
}
