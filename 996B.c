#include <stdio.h>
long a[100005];
int b[100005];
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt", "w", stdout);
    long n;
    scanf("%ld", &n);
    long i;
    for (i = 1; i <= n; i++)
    {
        scanf("%ld", &a[i]);
    }
    long m = 1000000000;
long flag = 0;
    for (i = 1; i <= n; i++)
    {
        if (a[i] < i)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = (a[i] - i) / n + 1;
        }
        if (b[i] < m)
        {
            m = b[i];
            flag = i;
        }
    }
    printf("%ld\n", flag);
}