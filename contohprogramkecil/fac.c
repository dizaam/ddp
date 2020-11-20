#include <stdio.h>


int main(){
    int n, x ,i;
    scanf("%d", &n);
    i = 1;
    x = 1;
    while(i <= n){
        x *= i;
        i++;
    }

    printf("%d\n", x);

    return 0;
}