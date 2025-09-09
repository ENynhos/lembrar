#include <stdio.h>
#include <stdlib.h>

int main(){

    int **M; //matriz dinâmina (ponteiro pra vetor de ponteiros)
    int m;  //número de linhas da matriz dinâminca
    int n;  //número de colunas de matriz dinâmica

    printf("Quantas linhas? >> ");
       scanf("%d", &m);
     printf("Quantas colunas? >> ");
        scanf("%d", &n);
        
    //alocação matriz dinâminca
    M = (int**)malloc(m*sizeof(int*));
     if(M == NULL){
      printf("Erro 2: Memória insuficiente.\n");
       return 2;
    }
    //alocação das linhas da matriz
    for(int i = 0; i < m; i++){
      M[i] = (int*)malloc(n*sizeof(int));
        if(M[i] == NULL){
         printf("Erro 3: Memória insuficiente.\n");
          return 3;
        }
    }
    //criar a matriz
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            M[i][j] = i + j;
        }
    } 
    
    //ler a matriz
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("\t%d", M[i][j]);
        }
        printf("\n");
    }   
    //liberar a matriz
     for(int i = 0; i < m; i++){
      free(M[i]);
     }
     free(M);
    return 0;
 }
