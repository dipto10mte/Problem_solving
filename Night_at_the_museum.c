#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char s[101];
    if (scanf("%100s", s)!= 1)
        return 0;
    int total_moves=0;
    char current='a';
    for (int i=0;s[i]!='\0';i++) {
        int diff=abs(s[i]-current);
        int moves=diff<(26-diff)? diff:(26-diff);
        total_moves+=moves;
        current=s[i];
    }
    printf("%d\n",total_moves);
    return 0;
}

