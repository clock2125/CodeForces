#include <stdio.h>
#define MAX 100
long a[MAX];
long d[MAX];
int main()
{
    long N, M;
    scanf("%ld %ld", &N, &M);
    long i;
    for (i = 0; i < N; i++)
    {
        scanf("%ld", &a[i]);
    }
    long delta;
    delta = 0;
    for (i = 0; i <= N; i++)
    {
        if (i == 0)
        {
            d[i] = a[i];
        }
        else if (i == N)
        {
            d[i] = M - a[N - 1];
        }
        else
        {
            d[i] = a[i] - a[i - 1];
        }
    }
    long key = 0;
    long ikey = 0;
    long result = 0;
    if (N % 2 == 1)
    {
        i = N;
        while (i > 0)
        {
            delta = delta - d[i];
            i--;
            if (delta < key && delta < 0)
            {
                key = delta;
                ikey = i;
            }
            delta = delta + d[i];
            i--;
        }
        if (key >= 0)
        {
            result = (delta + M) / 2;
        }
        else
        {
            result = (delta - 2 * key + M) / 2 - 1;
        }
    }
    else
    {
        i = N;
        while (i > 1)
        {
            delta = delta + d[i];
            i--;
            delta = delta - d[i];
            i--;
            if (delta < key && delta < 0)
            {
                key = delta;
                ikey = i;
            }
        }
        delta = delta + d[0];
        if (key >= 0)
        {
            result = (delta + M) / 2;
        }
        else
        {
            result = (delta - 2 * key + M) / 2 - 1;
        }
    }
    printf("%ld\n", result);
}