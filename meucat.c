#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    FILE *arq;
    char aux;
    int i, check, count = 0;

    if(argc < 2){
        printf("informe nome do arquivo");
        return 1;
    }

    for(i=0; i<argc; i++){
        arq = fopen(argv[i], "r");

        if(arq == NULL){
            printf("problemas ao ler o arquivo");
            return 1;
        }

        
    }
    

    return 0;
}