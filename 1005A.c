#include <stdio.h>
int a[1010];
int steps[1010];
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int cur = 0;
    int num = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==1){
            num++;
        }
        if(i>0&&a[i]==1){
            steps[cur++] = a[i - 1];
        }
    }
    printf("%d\n", num);
    for (i = 0; i < cur;i++){
        printf("%d ", steps[i]);
    }
    printf("%d\n",a[n-1]);
}