// listSE.c
// Exemplos de algoritmos com listas encadeadas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// define o tipo de dado a ser colocado na lista
typedef short Tdata; 

//tipo de dado para lista encadeada
typedef  struct TNode
{
	Tdata info; // dado armazenado no nó
	struct TNode *next;	// ponteiro para o próximo nó
} TNode;

typedef struct TListSE
{
	TNode *first;
	TNode *last;
	short length;
} TListSE;

//===========================================
//
// Funções sobre listas encadeadas
//
//===========================================

// Inicialização da lista
void initList(TListSE *L)
{
	L->first = NULL;
	L->last = NULL;
	L->length = 0;
}

// destruição da lista
void deleteList(TListSE *L)
{
	TNode *p = L->first;
	while (p)
	{
		L->first = L->first->next;
		free(p);
		L->length--;
		p = L->first;
	}
	L->last = NULL;
}

// verifica lista vazia
bool emptyList(TListSE L)
{
	return (L.length == 0);
}

// escreve a lista;

void printList(TListSE L)
{
	TNode *p = L.first;
	
	printf("[");
	while (p)
	{
		printf("%hd", p->info);
		if (p->next)
			printf(", ");
		p = p->next;
	}
	printf("]");
}

// inserção pela esquerda
short insertLeft(Tdata x, TListSE *L)
{
	TNode *aux;
	aux = (TNode*)malloc(sizeof(TNode));
	if (aux == NULL)	// falha na alocação
		return 1;	// sinaliza com erro, deixando a lista original intacta
	else
	{ // insere x na lista
		aux->info = x;					// atribui x para o campo info
		aux->next = L->first;		// insere o elemento antes do atual primeiro
		L->first = aux;					// Faz o ponteiro do primeiro apontar para o novo nó
		if (L->last == NULL)		// lista estava vazia
			L->last = aux;				// primeiro elemento é também o último
		L->length++;						// incrementa o tamanho da lista
		return 0;								// fim normal
	}
}

short insertRight(Tdata x, TListSE *L)
{
        TNode *aux;
        aux = (TNode*)malloc(sizeof(TNode));
        if(aux == NULL)
            return 2;
        else{
        aux->info = x;
        aux->next = NULL;
        
        if(L->last == NULL){
            L->first = L->last = aux;
        }else{
         L->last->next = aux;
         L->last = aux;
         
        L->length++;
        return 0;
        }
    }
}

void delLeft(TListSE *L){
        TNode *d;
        d = L->first->next;
        free(L->first);
        L->first = d;
        L->length--;
        if(L->first == NULL)
            L->last == NULL;
}

void delRight(TListSE *L){
        TNode *aux;
        aux = L->first;
        
        if(L->first == L->last){
            free(L->first);
            L->last = L->first;
        }
        else{
        while(aux->next->next != NULL)
            aux = aux->next;
            
        L->last = aux;
        free(aux->next);
        L->last->next = NULL;
        }
        L->length--;
}
        
TNode* searchList(Tdata x, TListSE L){
    TNode *aux = L.first;
        while(aux && aux->info != x)
            aux = aux->next;
        return aux;
}

int main(){
    TListSE l1;
    short a;
    char index;
    TNode *n;
    
    printf(" Inicializando a lista. \n");
        initList(&l1);
            printf(" Lista inicializada. \n");
                if(emptyList(l1)){
                    printf("Lista Vazia.\n");
}
    printList(l1);
    putchar('\n');
    
        insertLeft(0, &l1);
        insertLeft(1, &l1);
            printf("Digite um valor inteiro: ");
                scanf("%hd", &a);
                getchar();
        insertRight(a, &l1);
        printList(l1);
        putchar('\n');
        
            printf("Voce gostaria de remover o ultimo dígito?\nY or N\n");
            scanf("%c", &index);
            getchar();
                if(index == 'Y'){
                    delRight(&l1);
                    
                        printList(l1);
                            putchar('\n');
               } else{
                     printf("Voce busca algum elemento em específico?\nY or N\n");
                        scanf("%c", &index);
                        getchar();
                            if(index == 'Y'){
                             printf("Qual seria o elemento?\n digite aqui:\n>>");
                            scanf("%hd", &a);
                        printf("Buscando...\n");
                        n = searchList(a, l1);
                        if(n){
                            printf("elemento encontrado em %p.\n", n);
                            printf("imprimindo o valor: %hd\n", n->info);
                            printf("Modificando o valor para 5...\n");
                            n->info = 5;
                            printList(l1);
                            printf("\n");
                            }
                        
                    }
                        
        deleteList(&l1);
        return 0;
        
               }         
}
            
                    
    
    
