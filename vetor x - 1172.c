#include <stdio.h>

int main(){

    int x[10];
    int i, val;

    for(i = 0; i < 10; i++){
        scanf("%d", &val);
        if(val > 0){
            x[i] = val;
        }else{
            x[i] = 1;
        }
    }

    for(i = 0; i < 10; i++){
        printf("X[%d] = %d\n", val, x[i]);
    }

    return 0;
}
