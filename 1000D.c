#include <stdio.h>
#define mod 998244353
long long a[1005];
long long C[1005][1005];
long long dp[1005];
int main()
{
    int N;
    scanf("%d", &N);
    int i;
    for (i = 1; i <= N; i++)
    {
        scanf("%lld", &a[i]);
    }
    int j;
    for (i = 0; i < 1005; i++)
    {
        C[i][0] = 1;
        C[i][i] = 1;
    }
    for (i = 1; i < 1005; i++)
    {
        for (j = 1; j < i; j++)
        {
            C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
        }
    }
    dp[N + 1] = 1;
    for (i = N - 1; i >= 1; i--)
    {
        if (a[i] <= 0 || i + a[i] > N)
        {
            continue;
        }
        for (j = i + a[i] + 1; j <= N + 1; j++)
        {
            dp[i] += C[j - i - 1][a[i]] * dp[j];
            dp[i] = dp[i] % mod;
        }
    }
    long long sum = 0;
    for (i = 1; i <= N; i++)
    {
        sum += dp[i];
        sum = sum % mod;
    }
    printf("%lld\n", sum);
}