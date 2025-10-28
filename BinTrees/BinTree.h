#include <stdlib.h>

#define CLEAR "\033[0;0;0m"
#define RESET "\033[0m"
#define WHITE_RED "\033[97;101;1m"


typedef unsigned Tdado;

typedef struct TreeNode
{
	Tdado info;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;

//função de inserção
TreeNode* insertBintree(Tdado x, TreeNode *bt);

//função de remoção por merge(promoção)
TreeNode* deleteByMerge(TreeNode *bt, Tdado x);


//valor mínmo da árvore
Tdado minTree(TreeNode *bt);

//remoção por cópia
TreeNode* deleteByCopy(TreeNode *bt, Tdado x);

//impressão
void printBinTree(const TreeNode *bt, int level);

//apaga a arvore
void freeBinTree(TreeNode* bt);
