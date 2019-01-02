#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int i;
    for (i = 0; i < m;i++){
        int l, r;
        scanf("%d %d", &l, &r);
    }
    if(n%2==0){
        for (i = 0; i < n / 2;i++){
            printf("10");
        }
        printf("\n");
    }
    else{
        for (i = 0; i < n / 2;i++){
            printf("10");
        }
        printf("1\n");
    }
}