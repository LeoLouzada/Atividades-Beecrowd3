#include <stdio.h>

int main(){

    int n[10], val, i;

    scanf("%d", &val);

    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, val);
        val = val * 2;
    }

    return 0;
}
