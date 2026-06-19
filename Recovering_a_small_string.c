#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        char ans[4];
        for (int a=1;a<=26;a++) {
            for (int b=1;b<=26;b++) {
                int c=n-a-b;
                if (c>=1&&c<=26){
                    ans[0]=(char)('a'+a-1);
                    ans[1]=(char)('a'+b-1);
                    ans[2]=(char)('a'+c-1);
                    ans[3]='\0';
                    goto found;
                }
            }
        }
        found:
        printf("%s\n", ans);
    }
    return 0;
}
