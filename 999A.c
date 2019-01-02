#include <stdio.h>
int a[105];
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    int j = n - 1;
    for (i = 0; i < n;i++){
        if(a[i]<=k){
            ans++;
        }
        else
        {
            break;
        }
    }
    if(i==n){
        printf("%d\n", ans);
        return 0;
    }
    else{
        for (j = n - 1; j >= 0;j--){
            if(a[j]<=k){
                ans++;
            }
            else{
                break;
            }
        }
        printf("%d\n", ans);
        return 0;
    }
}