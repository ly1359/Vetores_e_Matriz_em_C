#include <stdio.h>
//função para soma
void soma_Matriz(int matrizA[2][2], int matrizB[2][2], int matrizC[2][2], int l, int c){
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
}
//função para subtração
void subtracao_Matriz(int matrizA[2][2], int matrizB[2][2], int matrizD[2][2], int l, int c){
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
    }
  }
}
// Função para ler a matriz
void lendoMatriz(int matriz[2][2], int l, int c){
  for (int i = 0; i < l; i++){
    for (int j = 0; j < c; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
}
// função para imprimir a matriz
void ImprimindoMatriz(int matriz[2][2], int l, int c){
  for (int i = 0; i < l; i++){
    for (int j = 0; j < c; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n"); 
  }
}
//função principal
int main()
{
  // declarando as matrizes, linha e coluna
  int mA[2][2]; 
  int mB[2][2]; 
  int mC[2][2];
  int mD[2][2];
  int linha =  2;
  int coluna = 2;
 
  // lendo as matrizes A e B
  printf("Digite os elementos da Matriz A:\n");
  lendoMatriz(mA, linha, coluna);
  printf("Digite os elementosda Matriz B:\n");
  lendoMatriz(mB, linha, coluna);

  // somando as matrizes A e B
  soma_Matriz(mA, mB, mC, linha, coluna);

  //Subtraindo as matrizes A e B
  subtracao_Matriz(mA, mB, mD, linha, coluna);

  //Mostrando o resultado da soma
  printf("Matriz Resultante(Matriz A + Matriz B):\n");
  ImprimindoMatriz(mC, linha, coluna);

  //Mostrando o resultado da subtração
  printf("Matriz Resultante(Matriz A - Matriz B):\n");
  ImprimindoMatriz(mD, linha, coluna);

  return 0;
}
