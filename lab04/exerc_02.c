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
        printf("entrada: %d, conteudo: %c, endereco: %d\n", i, vetor[i], &vetor[i]);

    return 0;
}