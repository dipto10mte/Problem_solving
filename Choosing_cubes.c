#include <stdio.h>
#include <stdlib.h>
int compare_desc(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}
void solve(){
    int n,f,k;
    if(scanf("%d %d %d",&n,&f,&k)!=3)
        return;
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int fav_value=a[f -1];
    qsort(a,n,sizeof(int),compare_desc);
    int first_pos=-1;
    int last_pos=-1;
    for(int i=0;i<n;i++){
        if(a[i]==fav_value){
            if(first_pos==-1)
                first_pos=i;
            last_pos=i;
        }
    }
    if(last_pos<k)
        printf("YES\n");
    else if(first_pos>=k)
        printf("NO\n");
    else
        printf("MAYBE\n");
    free(a);
}
int main(){
    int t;
    if (scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
