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


Lista adicionar_elemento(Lista A, int x){
    Lista novo;

    novo = malloc(sizeof(struct no));
    novo->dado = x;
    novo->prox = A;
    return novo;
}


void imprime(Lista A){
    Lista atual;
    for (atual=A; atual!=NULL; atual=atual->prox)
        printf("%d\n", atual->dado);
}


int busca(Lista A, int x){
    Lista atual;
    for (atual=A; atual!=NULL; atual=atual->prox)
        if(atual->dado == x)
            return &(atual->dado);
    
    return NULL;

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
    int pt;

    A = adicionar_elemento(A, 0);   
    A = adicionar_elemento(A, 3);
    A = adicionar_elemento(A, 5);
    A = adicionar_elemento(A, 1);
    A = adicionar_elemento(A, 4);   
    A = adicionar_elemento(A, 7);
    A = adicionar_elemento(A, 9);
    A = adicionar_elemento(A, 0);

    pt = busca(A, 1);

    printf("%d", pt);

    destruir_lista(A);

    return 0;
}