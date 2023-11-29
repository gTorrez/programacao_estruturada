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
        printf("%d ", atual->dado);
}


Lista tira_dai(Lista A, int x){
    Lista atual, anterior;

    anterior = criar_lista();
    atual = A;

    if(atual->dado == x){
        A = atual->prox;
        free(atual);
        return A;
    }

    for (atual=A; atual!=NULL; atual=atual->prox){
        if(atual->dado == x){
            anterior->prox = atual->prox;
            free(atual);

            break;
        }

        anterior = atual;
    }

    return A;
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

    A = adicionar_elemento(A, 0);   
    A = adicionar_elemento(A, 1);
    A = adicionar_elemento(A, 2);
    A = adicionar_elemento(A, 3);
    A = adicionar_elemento(A, 4);   
    A = adicionar_elemento(A, 5);
    A = adicionar_elemento(A, 6);
    A = adicionar_elemento(A, 7);

    imprime(A);

    A = tira_dai(A, 7);

    printf("\n");
    imprime(A);

    destruir_lista(A);

    return 0;
}
    