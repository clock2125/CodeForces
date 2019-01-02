//未通过
#include <stdio.h>
#include <string.h>
#define MAX 8000000
struct seq
{
    long long l;
    long long r;
};
typedef struct seq S;
S qj[200010];
// long long m = MAX;
long long M = -1;
long flg[MAX];
int main()
{
    // memset(cnt, 0, MAX);
    // memset(flg, 0, MAX);
    long n;
    scanf("%ld", &n);
    long i;
    long j;
    for (i = 0; i < n; i++)
    {
        scanf("%lld %lld", &qj[i].l, &qj[i].r);
        /* if (qj[i].l < m)
        {
            m = qj[i].l;
        } */
        if (qj[i].r > M)
        {
            M = qj[i].r;
        }
        for (j = qj[i].l; j <= qj[i].r; j++)
        {
            flg[j]++;
        }
    }
    long k;
    long cnt = 0;
    for (k = 1; k <= n;k++){
        cnt = 0;
        for (j = 0; j <= M;j++){
            if(k==flg[j]){
                cnt++;
            }
        }
        k == 1 ? printf("%ld", cnt) : printf(" %ld", cnt);
    }
    printf("\n");
    return 0;
}