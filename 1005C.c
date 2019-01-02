//未通过
#include <stdio.h>
#include <math.h>
long long a[120005];
int is_2p(long long x){
    int i;
    for (i = 0; i <= 30;i++){
        if(pow(2,i)==x){
            return 1;
        }
    }
    return 0;
}
int check(int i,int n){
    int j;
    for (j = 0; j < n;j++){
        if(j!=i){
            if(is_2p(a[j]+a[i])==1){
                return 1;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n;i++){
        scanf("%lld", &a[i]);
    }
    int ans = 0;
    for (i = 0; i < n;i++){
        if(check(i,n)==0){
            ans++;
        }
    }
    printf("%d\n", ans);
}