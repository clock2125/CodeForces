#include <stdio.h>
char a[40];
int main()
{
    long n, k;
    long i, j;
    char c = 'a';
    scanf("%ld %ld", &n, &k);
    scanf("%s", a);
    if (k >= n)
    {
        return 0;
    }
    else
    {
        long cnt = 0;
        while (c <= 'z')
        {
            for (j = 0; j < n; j++)
            {
                if (a[j] == c)
                {
                    a[j] = 0;
                    cnt++;
                    if (cnt == k)
                        goto p;
                }
            }
            c++;
        }

    p:
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
        return 0;
    }
}