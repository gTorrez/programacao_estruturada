// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, n;
    char* vetor; 
    
    printf("digite n: ");
    scanf("%d", &n);
 
    vetor = malloc(n * sizeof(char));

    if(vetor == NULL){
        printf("Sem memoria, fi!");
        exit(1);
    }

    printf("Digite %d caracteres: ", n);
    for(i=0; i<n; i++){
        getchar();
        scanf("%c", &vetor[i]);
    }

    for(i=0; i<n; i++)
        printf("entrada: %d, conteudo: %c, endereco: %p\n", i, vetor[i], &vetor[i]);

    free(vetor);
    return 0;
}