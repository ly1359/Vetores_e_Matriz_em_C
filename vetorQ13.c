#include <stdio.h>

void inverte(int n, int *vet){
    int rotev[n];
    for(int j = n - 1,i = 0; i < n; i++,j--){
        rotev[i] = vet[j];
        printf("%d ", rotev[i]);
    }
  return;
}

int main(){
  int vetor[9];
  printf("Digite o número dos elementos no vetor:\n");
    
  for(int i = 0; i < 9; i++){
    scanf("%d", &vetor[i]);
  }

  printf("Vetor A:\n");
  for(int i = 0; i < 9; i++){
    printf("%d ", vetor[i]);
  }
  printf("\nVetor invertido:\n");
  inverte(9, vetor);

  return 0;
}
