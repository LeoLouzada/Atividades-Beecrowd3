#include <stdio.h>

int main(){

    int n[20], i, a, b;

    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i < 10; i++){
        a = n[i];
        b = 19;
        n[i] = n[b - i];
        n[b - i] = a;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}

