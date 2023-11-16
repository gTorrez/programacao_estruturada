// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;
    int capacity; // capacidade do 'array' data
    int nelements; // número de elementos guardados em data
}*VectorInt;


VectorInt vectorint(void){
    VectorInt v;
    v = malloc(sizeof(struct{
                        int* data;
                        int capacity; 
                        int nelements; 
                        }));

    v->data = malloc(sizeof(int));
    v->capacity = 1;
    v->nelements = 0;

    return v;
}


void vectorint_insert(VectorInt v, int a){
    if(v->nelements == v->capacity){
        v->capacity *= 2;
        v->data = realloc(v->data, sizeof(int) * v->capacity);
    }

    v->data[v->nelements] = a;
    v->nelements += 1;
}


void vectorint_remove(VectorInt v, int a){
    int i, j;

    j = 0;
    for(i=0; i<v->nelements; i++)
        if(v->data[i] != a)
            v->data[j++] = v->data[i];

    v->nelements = j;

    if(v->nelements < v->capacity/2){
        v->capacity /= 2;
        v->data = realloc(v->data, sizeof(int) * v->capacity);
    }
}


int vectorint_at(VectorInt v, int i){
    return v->data[i];
}


int vectorint_belongs(VectorInt v, int a){
    int i;

    for(i=0; i<v->nelements; i++)
        if(v->data[i] == a)
            return 1;
    
    return 0;
}

int vectorint_size(VectorInt v){
    return v->nelements;
}

void vectorint_free(VectorInt v){
    free(v->data);
    free(v);
}


int main(){
    int i, check;
    VectorInt vetor;

    vetor = vectorint();

    vectorint_insert(vetor, 1);
    vectorint_insert(vetor, 9);
    vectorint_insert(vetor, 1);
    vectorint_insert(vetor, 0);

    printf("Vetor: ");
    for(i = 0; i<vetor->nelements; i++)
        printf("%d " , vetor->data[i]);

    printf("\n\n");
    printf("Element at index 1: %d\n", vectorint_at(vetor, 1));
    printf("\n");

    vectorint_remove(vetor, 1);

    printf("Vetor: ");
    for(i = 0; i<vetor->nelements; i++)
        printf("%d ", vetor->data[i]);

    printf("\n\n");

    check = vectorint_belongs(vetor, 1);
    if(check == 0)
        printf("O numero 1 nao pertece ao vetor");
    else
        printf("O numero 1 pertence ao vetor");

    printf("\n\n");
    check = vectorint_belongs(vetor, 0);
    if(check == 0)
        printf("O numero 0 nao pertece ao vetor");
    else
        printf("O numero 0 pertence ao vetor");
    
    printf("\n\n");
    printf("A quantidade de elementos no vetor é %d", vectorint_size(vetor));
    printf("\n\n");

    vectorint_free(vetor);
    printf("\n\n");

    return 0;
}