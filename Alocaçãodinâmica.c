#include <stdio.h>
#include <stdlib.h>

int main(){
        //variáveis
        int *V; //vetor dinâmico
        int n; //tamanho do vetor
        
        printf("tamanho do vetor >> ");
        scanf("%d", &n);

        //tentar alocar o vetor
        V = (int*)malloc(n*sizeof(int));
            if(V == NULL) {
                printf("Erro 1: Memória insuficiente.\n");

                return 1;
            }
                //manipular o vetor
                for(int i = 0; i < n; i++){
                    V[i] = i+2;
                }
                //escrever o vetor
                for(int i = 0; i < n; i++){
                    printf("%d", V[i]);
                }
                //desalocação do vetor
                free(V);

    return 0;
 }
