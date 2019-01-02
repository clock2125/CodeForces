#include <map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
map<int, int> mp;
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int i;
    int num;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        mp[num]++;
    }
    int ans = 0;
    int b = 0;
    while (q--)
    {
        ans = 0;
        scanf("%d", &b);
        for (i = 1 << 30; i > 0; i >>= 1)
        {
            if (i > b || mp[i] == 0)
            {
                continue;
            }
            else
            {
                int take = mp[i] > (b / i) ? (b / i) : mp[i];
                ans += take;
                b -= take * i;
            }
        }
        if (b > 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", ans);
        }
    }
}