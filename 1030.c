#include <stdio.h>
#include <stdlib.h>

typedef short Tdata;

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

void initList(TListSE *L)
{
	L->first = NULL;
	L->last = NULL;
	L->length = 0;
}

void KillElement(short int x, TListSE *L)
{
    TNode *aux = L->first;
    x += aux->info - 1;
    
    if(aux->info != 0){
        while(aux && aux->info != x)
            aux = aux->next;
        
            aux->info = 0;
    }else
        aux = aux->next;
    
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

int main()
{
    TListSE L1;
    short int cases, n, jump; 
        
        //repetição do número de casos
        scanf("%hd", &cases);
            while (cases--){
            short int ind = 1;
                //scan do número de elementos e o salto entre eles
                scanf("%hd %hd", &n, &jump);                
                
                //geração da lista
                initList(&L1);
                for(int i = 1 ; i <= n; i++){
                    insertRight(i, &L1);
                }
                printf("Caso %hd: ", ind);
                printList(L1);
                ind++;
                
                //matar elemento
                KillElement(jump, &L1);
                printList(L1);
                
                
            }
    
    return 0;
}
