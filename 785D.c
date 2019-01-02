//未通过
#include <stdio.h>
#include <string.h>
#define MOD 1000000007
int MIN(int a, int b)
{
    return a > b ? b : a;
}
char a[200005];
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int nol = 0;
    int cur = 0;
    gets(a);
    int i;
    int len = strlen(a);
    int num[len+10];
    long long C[len+10][len+10];
    for (i = 0; i < len; i++)
    {
        if (a[i] == '(')
        {
            nol++;
        }
        num[cur++] = nol;
    }
    int j;
    for (i = 0; i < len; i++)
    {
        C[i][i] = 1;
        C[i][0] = 1;
        for (j = 1; j < i; j++)
        {
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
            C[i][j] %= MOD;
        }
    }
    long long ans = 0;
    int lor = 0;
    for (i = 1; i <= len; i++)
    {
        if (a[len - i] == ')')
        {
            lor++;
            for (j = 0; j < MIN(lor, num[len - i]); j++)
            {
                ans += C[lor - 1][j] * C[num[len - i]][j + 1];
                ans %= MOD;
            }
        }
    }
    printf("%lld\n", ans);
}