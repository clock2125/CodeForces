#include <stdio.h>
#include <string.h>
long long a[100050];
int mp[100050];
int s[100050];
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    long long ans = 0;
    int t = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        if (mp[a[i]] == 0)
        {
            t++;
        }
        s[i + 1] = t;
        mp[a[i]] = 1;
    }
    int j;
    for (j = n; j >= 2; j--)
    {
        if (mp[a[j]] == 1)
        {
            ans += s[j];
            mp[a[j]] = 0;
        }
    }

    printf("%lld\n", ans);
}