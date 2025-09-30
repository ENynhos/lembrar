#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int *V = NULL;
    int n;
    
    printf("Quantos elementos deve ter o vetor? >> ");
    scanf("%d", &n);
    
    printf("Alocando V com tamanho %d...\n", n);
    V = (int*)realloc(NULL, sizeof(int)*n); //funciona igual o malloc() (1a alocação)
    if (!V){
        printf("erro: não fio possivel alocar o vetor!");
        exit(1);
    }
    
    //preenchendo o vetor com números aleatórios
    printf("preenchendo o vetor com números aleatórios... \n");
    srand(time(NULL)); //inicializa o gerador de números aleatórios setando a semento como NULL
    for (int i = 0 ; i < n; i++){
            V[i] = rand()%(2*n);
    }
    //print
    printf("V = [");
    for(int i = 0; i < n; i++){
        printf("%d", V[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
    
    printf("Dobrando o tamanho do vetor...\n");
    n *= 2;
    V = (int*)realloc(V, sizeof(int)*n);
    if (!V){
        printf("Erro: não foi possivel alcoar o V!");
        exit(2);
    }else {
         printf("preenchendo o vetor com números aleatórios... \n");
        srand(time(NULL)); //inicializa o gerador de números aleatórios setando a semento como NULL
        for (int i = n/2 ; i < n; i++){
            V[i] = rand()%(2*n);
       }
    }
    
    
    printf("V = [");
     for(int i = 0; i < n; i++){
        printf("%d", V[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
    
    printf("reduzindo para 2/3 o tamanho do vetor...\n");
    n *=    (float)2/3;
    V = (int*)realloc(V, sizeof(int)*n);
    if(!V){
        printf("Erro: nõ foi possivel");
        exit(3);
    }
   
    printf("V = ["); 
    for(int i = 0; i < n; i++){
        printf("%d", V[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
    
    free(V);
    
}
