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


Lista concat(Lista A, Lista B){
    if(A == NULL)
        return B;
    
    A->prox = concat(A->prox, B);
    return A;    
}


int main(){
    Lista A, B, C;

    A = criar_lista();
    B = criar_lista();
    C = criar_lista();
    
    adicionar_elemento(&B, 0);   
    adicionar_elemento(&B, 1);
    adicionar_elemento(&A, 9);
    adicionar_elemento(&A, 1);
    
    C = concat(A, B);
    imprime(C);

    destruir_lista(A);
    destruir_lista(B);
    destruir_lista(C);

    return 0;
}