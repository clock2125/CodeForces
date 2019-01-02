#include <math.h>
#include <stdio.h>
#define MAX 5010
long n, k;
long c[MAX];
long f[510], h[20];
long dp[MAX][MAX];
long cnt[100005];
long num[100005];
long Maximum(long a, long b)
{
    return (a > b ? a : b);
}
long Minimum(long a, long b)
{
    return (a > b ? b : a);
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%ld %ld", &n, &k);
    int i;
    long m = 0;
    for (i = 1; i <= n * k; i++)
    {
        scanf("%ld", &c[i]);
        cnt[c[i]]++;
        if (c[i] > m)
        {
            m = c[i];
        }
    }
    for (i = 1; i <= n; i++)
    {
        scanf("%ld", &f[i]);
        num[f[i]]++;
    }
    for (i = 1; i <= k; i++)
    {
        scanf("%ld", &h[i]);
    }
    for (i = 1; i < MAX; i++)
    {
        dp[i][1] = h[Minimum(i, k)];
    }
    int j, u;
    for (j = 2; j <= n; j++)
    {
        for (i = 1; i <= n * k; i++)
        {
            for (u = 1; u <= Minimum(i, k); u++)
            {
                dp[i][j] = Maximum(dp[i][j], dp[i - u][j - 1] + h[u]);
            }
        }
    }
    long res = 0;
    for (i = 1; i <= m; i++)
    {
        res += dp[cnt[i]][num[i]];
    }
    printf("%ld\n", res);
    return 0;
}