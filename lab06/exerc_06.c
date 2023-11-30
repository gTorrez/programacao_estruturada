//Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


typedef struct no* Lista;

struct no{
    int dado;
    Lista prox;
};


Lista criar_lista(){
    return NULL;
}


void adicionar_elemento(Lista* A, int x){
    Lista novo = malloc(sizeof(struct no));

    novo->dado = x;
    novo->prox = *A;
    *A = novo;

    return;
}


void imprime(Lista A){
    Lista atual;
    for (atual=A; atual!=NULL; atual=atual->prox)
        printf("%d\n", atual->dado);
}


void destruir_lista(Lista A){
    Lista atual, prox;

    atual = A;
    
    while(atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}


int main(){
    Lista A;

    A = criar_lista();
    
    adicionar_elemento(&A, 0);   
    adicionar_elemento(&A, 1);
    adicionar_elemento(&A, 9);
    adicionar_elemento(&A, 1);
 
    imprime(A);

    destruir_lista(A);

    return 0;
}