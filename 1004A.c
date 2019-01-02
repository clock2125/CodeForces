#include <stdio.h>
long x[105];
long delta[105];
int main(){
    int n;
    long d;
    scanf("%d %ld", &n, &d);
    long l = 2 * d;
    int ans = 2;
    int i;
    int cur = 0;
    for (i = 0; i < n;i++){
        scanf("%ld", &x[i]);
        if(i>0){
            delta[cur++] = x[i] - x[i - 1];
        }
    }
    for (i = 0; i < cur;i++){
        if(delta[i]>l){
            ans += 2;
        }
        if(delta[i]==l){
            ans++;
        }
    }
    printf("%d\n", ans);
}