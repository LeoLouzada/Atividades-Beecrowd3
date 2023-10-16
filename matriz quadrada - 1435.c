#include <stdio.h>

int main(){

    while(1){

        int n;
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        int matriz[200][200];
        int cima, esquerda, direita, baixo;

        for(int cima = 1; cima <= n; cima++){
            baixo = n - cima + 1;
            for(int esquerda = 1; esquerda <= n; esquerda++){
                direita = n - esquerda + 1;
                if(cima<=baixo && cima<=esquerda && cima<=direita){
                    matriz[cima][esquerda] = cima;
                }
                if(baixo<=cima && baixo<=esquerda && baixo<=direita){
                    matriz[cima][esquerda] = baixo;
                }
                if(esquerda<=direita && esquerda<=baixo && esquerda<=cima){
                    matriz[cima][esquerda] = esquerda;
                }
                if(direita<=esquerda && direita<=baixo && direita<=cima){
                    matriz[cima][esquerda] = direita;
                }

                if(esquerda == 1){
                    printf("%3d", matriz[cima][esquerda]);
                }else{
                    printf(" %3d", matriz[cima][esquerda]);
                }
            }
            printf("\n");

        }
        printf("\n");
    }

    return 0;
}
