#include <stdio.h>

int main(){

    double matriz[12][12], soma = 0;
    int linha, i, j;
    char op;

    scanf("%d", &linha);
    scanf("%c", &op);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(j = 0; j < 12; j++){
        soma = soma + matriz[linha][j];
    }

    if(op == 'S'){
        printf("%0.1lf\n", soma);
    }else if(op == 'M'){
        printf("%0.1lf\n", soma / 12);
    }

    return 0;
}
