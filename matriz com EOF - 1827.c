#include <stdio.h>

int main(){

    int tam;

    while(scanf("%d", &tam) != EOF){
        int matriz[tam][tam], i, j, posicao = tam / 3;

        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                if(i == j && (i < posicao || i > tam - posicao - 1)){
                    printf("2");
                }else if(i + j == tam - 1 && (i < posicao || i > tam - posicao - 1)){
                    printf("3");
                }else if(i >= posicao && i <= tam - posicao - 1 && j >= posicao && j <= tam - posicao - 1){
                    if(i == tam / 2 && j == tam / 2){
                        printf("4");
                    }else{
                        printf("1");
                    }
                }else{
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
