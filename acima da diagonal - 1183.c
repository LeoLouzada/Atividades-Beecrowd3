#include <stdio.h>

int main(){

    double matriz[12][12], media, soma = 0;
    char ope;
    int i, j, j1 = 1;

    scanf("%c", &ope);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        for(j = j1; j < 12; j++){
            soma = soma + matriz[i][j];
        }
        j1++;
    }

    if(ope == 'S'){
        printf("%0.1lf\n", soma);
    }else if(ope == 'M'){
        printf("%0.1lf\n", soma / 66);
    }

    return 0;
}
