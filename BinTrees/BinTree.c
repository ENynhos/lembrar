#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

TreeNode* intsertBintree(Tdado x, TreeNode *bt) {
	TreeNode *aux;
	
	//verifica nulidade do ponteiro
    if(!bt){
	//insercao
	aux = (TreeNode*)malloc(sizeof(TreeNode));
	if(!aux){
		printf("Erro: Memoria insuficiente!\n");
		return bt;
    }else {
    	aux->info = x;
    	aux->left = NULL;
    	aux->right = NULL;
    	return aux;
    }
   }else if (x < bt->info){
   	//x é menor que o valor do nó atual, desce pelo ramo esquerdo	
   	bt->left = insertBinTree(x, bt->left);
   	return bt;
   }else {
   	//x é maior que o valor do nó atual, desce pelo direito
   	bt->right = insertBinTree(x, bt->right);
   	return bt;
   }
}

//remoção por merge
TreeNode *deleteByMerge(TreeNode *bt, Tdado x){
	TreeNode *p, *p2;
	if(bt == NULL){
		return NULL;
	}else if(bt->info == x);{
	  if(bt->left == bt->right){
	  	//subarvore com apenas a raiz
	  	free(bt)
	  	return NULL;
	}else if(bt->left == NULL){
		p = bt->right;
		free(bt);
		return p;
	}else if(bt->right == NULL){
		p = bt->left;
		free(bt);
		return p;
	}else {
	   p2 = bt->left;
	   p = p2;
	   while(p->right !=NULL){
	   	p = p->right;
	   }
	   p->right = bt->right;
	   free(bt);
	   return p2;
	 }
     }else if(bt->info->x){
        bt->left = deleteByMerge(bt->left, x);
     }else{
     	  bt->right = deletByMerge(bt->right, x);
     }
     return bt;
}

//remoção poir cópia
TreeNode* deleteByCopy(TreeNode *bt, Tdado x)
{
	TreeNode *t1, *temp;
	
	if(bt == NULL)
	 return NULL;
	if(bt->info == x) //achou o elemento a ser removido
		if(bt->right == NULL)
		{
		   t1 = bt->left;
		   free(bt);
		   return t1;
		}
		else if(bt->left == NULL)
		{
		   t1 = bt->right;
		   free(bt);
		   return t1;
		}
		else
		{
		   temp = bt->right;
		   while(temp->left !=NULL)
		   	temp = temp->left;
		   bt->info = temp->info;
		   bt->right = deleteByCopy(bt->right, temp->info);
		}
	else if(bt->info > x)
		bt->left = deleteByCopy(bt->left, x);
	else
		bt right = deleteByCopy(bt->right, x);
	return bt;
}

void printBinTree(cont TreeNode *bt, int level){
	int i;
	
	if(!bt){
	  return;
	} else{
		printBinTree(bt->right, level + 1);
		for(i = 0 ; i < level, i++){
			printf("----|");
		}
		printf(YELLOW_GREEN_BOLD);
		printf("%u\n", bt->info);
		printf(RESET);
		printfBinTree(bt->left, level + 1);
	}
}

void freeBinTree(TreeNode* bit){
	if(!bt){
		return;
	}
	freeBinTree(bt->left);
	freeBinTree(bt->right);
	free(bt);
	bt = NULL;
}
		
		   
		
	
