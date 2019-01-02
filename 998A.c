#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i,j;
    int a[20];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n == 1)
    {
        printf("-1\n");
        return 0;
    }
    else
    {
        int sum = 0;
        //qsort(a, n, sizeof(a[0]), cmp);
        for (j = 1; j < n;j++){
            sum += a[j];
        }
        if(a[0]!=sum){
            printf("1\n1\n");
        }
        else{
            if(n==2){
                printf("-1\n");
            }
            else{
                printf("2\n1 2\n");
            }
        }
    }
}