#include <stdio.h>
#include <string.h>
char s[200005];
char t[200005];
int main(){
    scanf("%s", s);
    scanf("%s", t);
    int ls = strlen(s);
    int lt = strlen(t);
    int i = ls - 1;
    int j = lt - 1;
    while(i>=0&&j>=0&&s[i]==t[j]){
        i--;
        j--;
    }
    printf("%d\n", i + j + 2);
}