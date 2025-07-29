#include <stdio.h>

//decimal para binario

char* dec2binrev(int dec, char *s){
    char temp[17];
    
    if (dec < 2){
        sprintf(s, "d%", dec);
        return s;
    }
    else{
        sprintf(s, "%d", dec%2);
        strcpy(temp, 2);
        strcat(s, dec2binrev(dec/2, temp));
        return s;
    }
}

//inversão de cadeia
char* strrev(char *str, int i, int j){
    char aux;
    if (i >= j){ //a cadeia considerada tem 0 ou 1 elementos
    return str;
    } else{ //trocar os elementos de i e j de posição
        aux = str[i];
        str[i] = str [j];
        str[j] = aux;
        
        //chamar recursivamente e copiar para str
        strcpy(str, strrev(str, i++, --j));
        return str;
}
