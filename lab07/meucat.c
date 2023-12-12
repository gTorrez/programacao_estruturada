// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    FILE* arq;
    char aux;
    int i;

    if(argc < 2){
        printf("informe nome dos arquivos");
        return 1;
    }


    for(i=1; i<argc; i++){
        arq = fopen(argv[i], "r");

        if(arq == NULL){
                printf("problemas ao ler o arquivo %s", argv[i]);
                return 1;
            }
        else{
            while (fscanf(arq, "%c", &aux) != EOF)
               printf("%c", aux);
            
            printf("\n");
        }
    }

    fclose(arq);
    return 0;
}