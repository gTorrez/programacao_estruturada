// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE* arq;
    char aux;
    int check, count;

    check = 0;
    count = 0;

    if(argc < 2){
        printf("informe nome do arquivo");
        return 1;
    }

    arq = fopen(argv[1], "r");

    if(arq == NULL){
            printf("problemas ao ler o arquivo");
            return 1;
        }

    while (fscanf(arq, "%c", &aux) != EOF){
        if((aux >= 65 && aux <= 90) || (aux >=97 && aux <= 122)){
            if(check == 0){
                check = 1;
                count += 1;
            }
        }

        else
            check = 0;
    } 

    printf("%d", count);

    fclose(arq);
    return 0;
}