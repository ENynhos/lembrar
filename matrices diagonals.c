
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
