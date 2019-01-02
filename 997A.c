#include <stdio.h>
char a[300005];
int main()
{
    long n, x, y;
    scanf("%ld %ld %ld", &n, &x, &y);
    long long i;
    long long cnt = 0;
    scanf("%s", a);
    a[n] = '1';
    for (i = 0; i < n;i++){
        if(a[i]=='0'&&a[i+1]!='0'){
            cnt++;
        }
    }
    // printf("%ld\n", cnt);
    long long ans = 0;
    if(cnt==0){
        printf("0\n");
        return 0;
    }
    if (x < y)
    {
        ans = (cnt - 1) * x + y;
    }
    else
    {
        ans = cnt * y;
    }
    printf("%lld\n", ans);
    return 0;
}