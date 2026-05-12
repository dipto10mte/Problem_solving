#include<stdio.h>
int main()
{
    int i,j,n,w,x=0,y=0,z=0;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            b[x]=i+1;
            x++;
        }
        else if(a[i]==2){
            c[y]=i+1;
            y++;
        }
        else{
            d[z]=i+1;
            z++;
        }
    }
    if(x<y&&x<z)
        w=x;
    else if(y<z)
        w=y;
    else
        w=z;
    printf("%d\n",w);
    for(i=0;i<w;i++){
        printf("%d %d %d\n",b[i],c[i],d[i]);
    }
    return 0;
}
