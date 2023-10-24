#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 1000
#define MAX_LINHA 70

int main(){
    int i, counter, len_texto;
    char texto[MAX_TEXTO];

    printf("Insira o texto: \n");
    fgets(texto, MAX_TEXTO, stdin);

    len_texto = strlen(texto);
    counter = 0;

    printf("\n");

    for(i=0; i<len_texto; i++){
        if(texto[i] == 32){
            printf(" ");
            if(counter > MAX_LINHA){
                printf("\n");
                counter = 0;
            }
        }
        else{
            printf("%c", texto[i]);
        }

        counter += 1;
    }

    return 0;
}