#include <stdio.h>
#include <string.h>

#define MAX_FRASE 1000
#define MAX_PALAVRA 30

int main(){
    int i, j, k, check, len_frase, len_aux;
    char frase[MAX_FRASE], palavra[MAX_PALAVRA], aux[MAX_PALAVRA];

    printf("Digite uma frase:");
    fgets(frase, MAX_FRASE, stdin);

    printf("Digite uma palavra:");
    scanf("%s", &palavra);

    len_frase = strlen(frase);
    check = 1;
    k = 0;

    for(i=0; i<len_frase; i++){
        if((frase[i] < 65) || ((frase[i] > 90) && (frase[i] < 97)) || (frase[i] > 122)){
    
            if(strcmp(aux, palavra) == 0){
                check += 1;
                break;
            }
            
            len_aux = strlen(aux);

            for(j=0; j<len_aux; j++)
                aux[j] = '\000';
            k = 0;
        }
        else{
            aux[k] = frase[i];
            k += 1;
        }
    }

    if(check != 1)
        printf("sim");
    else
        printf("nao");

    return 0;
}