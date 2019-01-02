#include <stdio.h>
int a[105];
int b[105];
int main(){
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n;i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int m = 0;
    for (i = 0; i < 105;i++){
        if(b[i]>m){
            m = b[i];
        }
    }
    printf("%d\n", m);
}