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
    Lista atual;
    atual = A;

    if(A == NULL)
        return A;
    

    if(atual->dado == x){
        A = A->prox;
        free(atual);
        return tira_dai(A, x);
    }

    A->prox = tira_dai(A->prox, x);
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
    int rmv_num = 7;

    A = criar_lista();

    A = adicionar_elemento(A, 0);   
    A = adicionar_elemento(A, rmv_num);   
    A = adicionar_elemento(A, 1);   
    A = adicionar_elemento(A, 9);   
    A = adicionar_elemento(A, rmv_num);   
    A = adicionar_elemento(A, rmv_num);   
    A = adicionar_elemento(A, 1);   
    A = adicionar_elemento(A, rmv_num);   
    

    printf("Lista original: ");
    imprime(A);

    A = tira_dai(A, rmv_num);
   
    printf("\n");
    
    printf("Lista removendo %d: ", rmv_num);
    imprime(A);

    destruir_lista(A);

    return 0;
}
    