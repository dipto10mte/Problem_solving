#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, a, b, c;
        scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
        long long cycle = a + b + c;
        long long full_cycles = (n - 1) / cycle;
        long long total = full_cycles * cycle;
        long long days = full_cycles * 3;
        long long rem[3] = {a, b, c};

    }
    return 0;
}
