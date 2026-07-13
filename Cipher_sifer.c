#include <stdio.h>
#include <string.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[105];
    scanf("%s",s);
    for (int i=0;i<n;i++) {
        char current_char=s[i];
        printf("%c",current_char);
        i++;

    }
    printf("\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
