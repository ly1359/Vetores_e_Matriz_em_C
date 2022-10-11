#include <stdio.h>
//função para multiplicar
void multiplicacao_Matriz(int matrizA[2][2], int matrizB[2][2], int matrizC[2][2], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }
}
//função para ler a matriz
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
int main(){
    int mA[2][2];
    int mB[2][2];
    int mC[2][2];
    int linha = 2;
    int coluna = 2;

    //lendo as matriz A e B
    printf("Digite os elementos da Matriz A:\n");
    lendoMatriz(mA, linha, coluna);
    printf("Digite os elementosda Matriz B:\n");
    lendoMatriz(mB, linha, coluna);

    //Multiplicando as matriz A e B
    multiplicacao_Matriz(mA, mB, mC, linha, coluna);

    //mostrando o resultado
    printf("Matriz Resultante(Matriz A * Matriz B):\n");
    ImprimindoMatriz(mC, linha, coluna);

    return 0;
}
