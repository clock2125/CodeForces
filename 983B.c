#include <stdio.h>
#include <string.h>

long Maximum(long a, long b, long c)
{
    if (a > b)
    {
        return a > c ? a : c;
    }
    else
    {
        return b > c ? b : c;
    }
}

long n;
long a[5005];
long q;
long dp[5005][5005];
long F[5005][5005];

int main()
{
    scanf("%ld", &n);
    long i,j;
    for (i = 1; i <= n; i++)
    {
        scanf("%ld", &a[i]);
    }
    for (i = 1; i <= n;i++){
        F[i][i] = a[i];
    }
    for (j = 2; j <= n;j++){
        for (i = j - 1; i >= 1;i--){
            F[i][j] = F[i][j - 1] ^ F[i + 1][j];
        }
    }
    scanf("%ld", &q);
    for (i = 1; i <= n; i++)
    {
        dp[i][i] = a[i];
    }
    for (j = 2; j <= n; j++)
    {
        for (i = j - 1; i >= 1; i--)
        {
            dp[i][j] = Maximum(dp[i][j - 1], dp[i + 1][j], F[i][j]);
        }
    }
    long l, r;
    while (q--)
    {
        scanf("%ld %ld", &l, &r);
        printf("%ld\n", dp[l][r]);
    }
    return 0;
}
