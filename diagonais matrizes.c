//acima da diagonal principal
for(int i = 0; i < lin; i++){
            for(int j = (i + 1); j < col; j++){
                s += m[i][j];
                counter++;
                }
            }
//abaixo da diagonal principal
 for(int i = 0; i < lin; i++){
            for(int j = 0; j < i; j++){
                s += m[i][j];
                counter++;
            }
       }
//acima diagonal secundaria 
for(int i = 0; i < lin; i++){
            for(int j = 0; j < col - (i+1) ; j++){
                s += m[i][j];
                counter++;
                }
            }
//abaixo da diagonal secundária
for(int i = 0; i < lin; i++){
            for(int j = (col - i); j < lin ; j++){
                s += m[i][j];
                counter++;
                }
            }
