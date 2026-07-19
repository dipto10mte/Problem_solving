#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char s[101];
    if (scanf("%100s", s)!= 1)
        return 0;
    int total_moves=0;
    char current='a';

    printf("%d\n",total_moves);
    return 0;
}

