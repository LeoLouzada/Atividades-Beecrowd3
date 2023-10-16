#include <stdio.h>

int main(){

    unsigned long long int fib[61];
    int n, t, cont, i;

    for(n == 0; n < 61; n++){
        if(n == 0){
            fib[0] = 0;
        }else if(n == 1){
            fib[1] = 1;
        }else{
            fib[n] = fib[n - 1] + fib[n - 2];
        }
    }

    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d", &cont);
        printf("Fib(%d) = %lld\n", cont, fib[cont]);
    }

    return 0;
}

