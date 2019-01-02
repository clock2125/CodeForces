#include <stdio.h>
#include <string.h>
void rev(char a[],int d){
    char tmp[105];
    int i;
    int step = 0;
    for (i = d-1; i >= 0;i--){
        tmp[step++] = a[i];
    }
    step = 0;
    for (i = 0; i < d;i++){
        a[i] = tmp[step++];
    }
}
char a[105];
int dvs[105];
int main(){
    int n;
    scanf("%d", &n);
    scanf("%s", a);
    int i;
    int cur = 0;
    for (i = 2; i <= n;i++){
        if(n%i==0){
            dvs[cur++] = i;
        }
    }
    for (i = 0; i < cur;i++){
        rev(a, dvs[i]);
    }
    printf("%s\n", a);
}