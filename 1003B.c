#include <stdio.h>
int main(){
    int a, b, x;
    scanf("%d %d %d", &a, &b, &x);
    int s = (x+1) / 2;
    // int t = x + 1 - s;
    int i;
    if(a>b){
        if(x%2==0){
            for (i = 1; i <= s;i++){
                printf("01");
            }
            for (i = 1; i <= b - s;i++){
                printf("1");
            }
            for (i = 1; i <= a - s;i++){
                printf("0");
            }
            printf("\n");
        }
        else{
            for (i = 1; i <= s - 1;i++){
                printf("01");
            }
            for (i = 1; i <= a - s + 1;i++){
                printf("0");
            }
            for (i = 1; i <= b - s + 1;i++){
                printf("1");
            }
        }
    }
    else{
        if(x%2==0){
            for (i = 1; i <= s;i++){
                printf("10");
            }
            for (i = 1; i <= a - s;i++){
                printf("0");
            }
            for (i = 1; i <= b - s;i++){
                printf("1");
            }
            printf("\n");
        }
        else{
            for (i = 1; i <= s - 1;i++){
                printf("10");
            }
            for (i = 1; i <= b - s + 1;i++){
                printf("1");
            }
            for (i = 1; i <= a - s + 1;i++){
                printf("0");
            }
        }
    }
}