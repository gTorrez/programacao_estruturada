#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, n;
    int* vetor; 
    
    printf("digite n: ");
    scanf("%d", &n);
 
    vetor = malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("Sem memoria, fi!");
        exit(1);
    }

    printf("Digite %d valores: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<n; i++)
        printf("entrada: %d, conteudo: %d, endereco: %p\n", i, vetor[i], &vetor[i]);

    free(vetor);
    return 0;
}