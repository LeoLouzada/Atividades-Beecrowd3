#include <stdio.h>

int main(){

    int tam, v, i, menor, posicaoMenor;

    scanf("%d", &tam);

    int x[tam];

    for(i = 0; i < tam; i++){
        scanf("%d", &v);
        x[i] = v;
    }

    menor = x[0];
    posicaoMenor = 0;

    for(i = 1; i < tam; i++){
        if(x[i] < menor){
            menor = x[i];
            posicaoMenor = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicaoMenor);

    return 0;
}
