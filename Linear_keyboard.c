#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void solve() {
    char keyboard[27], word[200001];
    scanf("%s %s", keyboard, word);
    int pos[26];
    for(int i=0;i<26;i++) {
        pos[keyboard[i] - 'a'] = i;
    }

}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
