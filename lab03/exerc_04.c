//Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <string.h>

#define MAX_FRASE 1000
#define MAX_PALAVRA 30


int verifica_palavra(char frase[MAX_FRASE], char palavra[MAX_PALAVRA]){
    int len_frase, len_aux, check, i, j, k;
    char aux[MAX_PALAVRA];

    for(i=0; i<MAX_PALAVRA; i++)
        aux[i] = NULL;

    len_frase = strlen(frase);
    check = 1;
    k = 0;

    for(i=0; i<len_frase; i++){
        if((frase[i] < 65) || ((frase[i] > 90) && (frase[i] < 97)) || (frase[i] > 122)){
    
            if(strcmp(aux, palavra) == 0){
                check = 0;
                return check;
            }
            
            len_aux = strlen(aux);

            for(j=0; j<len_aux; j++)
                aux[j] = NULL;
            k = 0;
        }
        else{
            aux[k] = frase[i];
            k += 1;
        }
    }

    return check;
}


int main(){
    int check;
    char frase[MAX_FRASE], palavra[MAX_PALAVRA];
    printf("Digite uma frase:");
    fgets(frase, MAX_FRASE, stdin);

    printf("Digite uma palavra:");
    scanf("%s", &palavra);

    check = verifica_palavra(frase, palavra);

    if(check == 0)
        printf("sim");
    else
        printf("nao");

    return 0;
}