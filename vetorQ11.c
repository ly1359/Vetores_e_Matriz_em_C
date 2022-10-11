#include <stdio.h>

int negativos(int n, float *vet){
  int numNeg = 0;
  for(int i = 0; i < n; i++){
    if(vet[i] < 0){
      numNeg += 1;
    }
  }
  return numNeg;
}

int main() {
  int i;
  float vetor[6];
  
  printf("digite os elementos do Vetor:\n");
  for(i = 0; i < 6; i++){
      scanf("%f", &vetor[i]);
  }
  printf("Vetor:\n");
  for(i = 0; i < 6; i++){
      printf("%2.f ", vetor[i]);
  }
  printf("\n %d números negativos.", negativos(6, vetor));
  
 return 0; 
}
