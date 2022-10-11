#include <stdio.h>
int pares(int n, int *vet){
    int numPares = 0;
    for(int i = 0; i < n; i++){
        if((vet[i] % 2) == 0){
            numPares += 1;
        }
    }
    return numPares;
}

int main(){
    int vetor[9];
    printf("Digite os números para o Vetor:\n");
    for(int i = 0; i < 9; i++){
        scanf("%d", &vetor[i]);
    }
    printf("\nVetor:\n");
    for(int i = 0; i < 9; i++){
        printf("%d ", vetor[i]);

    }
    printf("\n%d números de pares.", pares(9, vetor));

    return 0;
}
