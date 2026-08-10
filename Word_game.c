#include <stdio.h>
#include <string.h>

#define ALPHABET_CUBE 17576
#define MAX_N 1000

int hash_word(const char *s) {
    return (s[0] - 'a') * 676 + (s[1] - 'a') * 26 + (s[2] - 'a');
}

void solve() {
    int n;
    scanf("%d", &n);

    int count[ALPHABET_CUBE] = {0};
    int p1[MAX_N], p2[MAX_N], p3[MAX_N];
    char word[4];

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int h = hash_word(word);
        p1[i] = h;
        count[h]++;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int h = hash_word(word);
        p2[i] = h;
        count[h]++;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int h = hash_word(word);
        p3[i] = h;
        count[h]++;
    }

    int score1 = 0, score2 = 0, score3 = 0;

    for (int i = 0; i < n; i++) {
        if (count[p1[i]] == 1) score1 += 3;
        else if (count[p1[i]] == 2) score1 += 1;

        if (count[p2[i]] == 1) score2 += 3;
        else if (count[p2[i]] == 2) score2 += 1;

        if (count[p3[i]] == 1) score3 += 3;
        else if (count[p3[i]] == 2) score3 += 1;
    }

    printf("%d %d %d\n", score1, score2, score3);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
