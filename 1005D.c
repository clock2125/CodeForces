#include <stdio.h>
#include <string.h>
char s[200005];
long sum[200005];
long dp[200005];
int main()
{
    scanf("%s", s);
    long len = strlen(s);
    long i;
    long cur = 0;
    long ans = 0;
    for (i = 0; i < len; i++)
    {
        ans += s[i] - '0';
        sum[cur++] = ans;
    }
    for (i = 0; i < len; i++)
    {
        dp[i] = (sum[i] % 3 == 0);
    }
    long j;
    for (i = 1; i < len; i++)
    {
        for (j = i-1; j >= 0; j--)
        {
            long t = ((sum[i] - sum[j]) % 3 == 0);
            if(t+dp[j]>dp[i]){
                dp[i] = t+dp[j];
            }
            if(t==1){
                break;
            }
        }
    }
    printf("%ld\n", dp[len - 1]);
    return 0;
}