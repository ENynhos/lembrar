
//above main diagonal
for(int i = 0; i < lin; i++){
            for(int j = (i + 1); j < col; j++){
                s += m[i][j];//sum of read elements
                counter++;//amount of read elements
                }
            }
//below main diagonal
 for(int i = 0; i < lin; i++){
            for(int j = 0; j < i; j++){
                s += m[i][j];//sum of read elements
                counter++;//amount of read elements
            }
       }
//above secondary diagonal 
for(int i = 0; i < lin; i++){
            for(int j = 0; j < col - (i+1) ; j++){
                s += m[i][j];//sum of read elements
                counter++;//amount of read elements
                }
            }
//below secondary diagonal
for(int i = 0; i < lin; i++){
            for(int j = (col - i); j < lin ; j++){
                s += m[i][j];//sum of read elements
                counter++;//amount of read elements
                }
            }
//matriz de colunas variáveis
        scanf("%d", &N);
    int X[N];
        for(int i = 0; i < N; i++){
        scanf("%d", &M);
            for(int j = 0;  j < M; j++){
                int V[M];
                scanf("%d", &V[j]);
                X[i] += V[j];
                 }
                for(int H = 0; H < N ; H++){
                X[H] = pow(X[H]-M, 2)/M-1;
             }
        }
