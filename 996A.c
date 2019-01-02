#include <stdio.h>
long a[10] = {1000000000, 100, 20, 10, 5, 1};
int main()
{
    long n;
    scanf("%ld", &n);
    long ans = 0;
    int i = 1;
    while (n)
    {
        long t;
        t = n / a[i];
        n -= t * a[i];
        i++;
        ans += t;
    }
    printf("%ld\n", ans);
    return 0;
}