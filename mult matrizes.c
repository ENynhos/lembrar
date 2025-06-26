#include <stdio.h>
#include <string.h>

typedef struct {
    float m[10][10]; //memoria alocada matriz
    int lin; //num linhas matriz
    int col; //num colunas matriz
} matriz;

//declaração de variaveis
matriz a, b, c;

int main(){
        //leitura das dimensões da matriz a
    scanf("%d %d", &a.lin, &a.col);
    
    //cod leitura matriz
    for (int i = 0; i < a.lin; i++)
        for(int j = 0; j < a.col; j++)
            scanf("%f", &a.m[i][j]);
            
    //escrita matriz a 
    for(int i = 0; i < a.lin; i++){
        for(int j = 0; j < a.col; j++){
            printf("%.1f", a.m[i][j]);
            if(j < a.col - 1)
                printf("\t ");
    }
    printf("\n");
}
    //leitura dimensões de b
    scanf("%d %d", &b.lin, &b.col);
    
    //cod leitura matriz
    for (int i = 0; i < b.lin; i++)
        for(int j = 0; j < b.col; j++)
            scanf("%f", &b.m[i][j]);
    
    //escrita matriz b    
     for(int i = 0; i < b.lin; i++){
        for(int j = 0; j < b.col; j++){
            printf("%.1f", b.m[i][j]);
            if(j < b.col - 1)
                printf("\t ");
    }
    printf("\n");
}

    //multiplicação de matrizes
    //testa se é possível
    if(a.col != b.lin)
        printf("Erro: impossível");
        
    else{
        //zerar a matriz c
        memset(c.m, 0, sizeof(float)*100);
        c.lin = a.lin;
        c.col = b.col;
        
        //multiplica as matrizes
        for(int i = 0; i < a.lin; i++)
            for(int j = 0; j < b.col; j++)
                for(int k = 0; k < a.col; k++)
                    c.m[i][j] += a.m[i][k]*b.m[i][j];
        
           //escrita matriz c    
     for(int i = 0; i < c.lin; i++){
        for(int j = 0; j < c.col; j++){
            printf("%.1f", c.m[i][j]);
            if(j < c.col - 1)
                printf("\t ");
    }
    printf("\n");
}
    return 0;
    
}

    }    
