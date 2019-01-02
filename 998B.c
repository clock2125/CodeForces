#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int a[105];
int b[105];
int cost[105];
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n, B;
    scanf("%d %d", &n, &B);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i] % 2;
    }
    // int flg = 0;
    i = 0;
    int n1 = 0, n2 = 0;
    int t = 0;
    while (i < n-1)
    {
        if (b[i] == 1)
        {
            n1++;
        }
        if (b[i] == 0)
        {
            n2++;
        }
        if (n1 == n2)
        {
            cost[t++] = abs(a[i + 1] - a[i]);
            n1 = 0;
            n2 = 0;
        }
        i++;
    }
    if (t == 0)
    {
        printf("0\n");
    }
    else
    {
        qsort(cost, t, sizeof(cost[0]), cmp);
        int sum = 0;
        int ans = 0;
        for (i = 0; i < t; i++)
        {
            sum += cost[i];
            if (sum <= B)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", ans);
    }
}