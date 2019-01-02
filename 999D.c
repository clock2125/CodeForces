//未通过，应该要用链表
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 200005
long n, m;
long a[MAXN];
long xb[MAXN][MAXN];
long rem[MAXN];
long FangCha(long rem[],long s)
{
    long temp = 0;
    long i;
    long ans = 0;
    for (i = 0; i < m; i++)
    {
        temp = rem[i] - s;
        ans += temp * temp;
    }
    return ans;
}
int main()
{
    scanf("%ld %ld", &n, &m);
    long s = n / m;
    long i;
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
        rem[a[i] % m]++;
        xb[a[i] % m][i] = 1;
    }
    long j = 0;
    long ans = 0;
    while (FangCha(rem,s) != 0)
    {
        if (rem[j] <= s)
        {
            j++;
            if (j == m)
                j -= m;
        }
        else
        {
            long t;
            for (t = 0; t < n; t++)
            {
                if (xb[j][t] == 1)
                    break;
            }
            xb[j][t] = 0;
            i = j;
            long step = 0;
            while (rem[i] >= s)
            {
                i++;
                step++;
                if (i == m)
                {
                    i -= m;
                }
            }
            a[t] += step;
            xb[i][t] = 1;
            ans += step;
            rem[j]--;
            rem[i]++;
            j++;
            if (j == m)
                j -= m;
        }
    }
    printf("%ld\n", ans);
    for (i = 0; i < n; i++)
    {
        i == 0 ? printf("%ld", a[i]) : printf("% ld", a[i]);
    }
    printf("\n");
    return 0;
}