#include <stdio.h>
int a[5005];
int S[5005];
double Average(int i, int j)
{
    double avg;
    avg = ((double)(S[j] - S[i - 1]) / (double)(j - i + 1));
    return avg;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        S[i] = sum;
    }
    double avg = 0;
    double M = 0;
    int j = 0;
    for (i = k; i <= n; i++)
    {
        j = 0;
        while (j + i <= n)
        {
            avg = Average(j, i + j - 1);
            if (avg > M)
            {
                M = avg;
            }
            j++;
        }
    }
    printf("%.9lf\n", M);
}