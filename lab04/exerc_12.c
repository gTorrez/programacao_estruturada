// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void** data;
    int capacity; // capacidade do 'array' data
    int nelements; // número de elementos guardados em data
}*Vector;


Vector vector(void){
    Vector v;
    v = (Vector)malloc(sizeof(struct{
                        void** data;
                        int capacity; 
                        int nelements; 
                        }));

    v->data = (void**)malloc(sizeof(void*));
    v->capacity = 1;
    v->nelements = 0;

    return v;
}

void vectorint_insert(Vector v, void* e){
    if(v->nelements == v->capacity){
        v->capacity *= 2;
        v->data = (void**)realloc(v->data, sizeof(void*) * v->capacity);
    }

    v->data[v->nelements] = e;
    v->nelements += 1;
}


void vectorint_remove(Vector v, void* e){
    int i, j;

    j = 0;
    for(i=0; i<v->nelements; i++)
        if(v->data[i] != e)
            v->data[j++] = v->data[i];

    v->nelements = j;

    if(v->nelements < v->capacity/2){
        v->capacity /= 2;
        v->data = (void**)realloc(v->data, sizeof(void*) * v->capacity);
    }
}


void* vectorint_at(Vector v, int i){
    return v->data[i];
}


int vectorint_belongs(Vector v, void* e){
    int i;

    for(i=0; i<v->nelements; i++)
        if(v->data[i] == e)
            return 1;
    
    return 0;
}

int vectorint_size(Vector v){
    return v->nelements;
}

void vectorint_free(Vector v){
    free(v->data);
    free(v);
}


int main(){
    int i, check;
    char a, b, c, d;
    Vector vetor;

    a = 's';
    b = 'c';
    c = 'c';
    d = 'p';

    vetor = vector();

    vectorint_insert(vetor, &a);
    vectorint_insert(vetor, &b);
    vectorint_insert(vetor, &c);
    vectorint_insert(vetor, &d);

    printf("Vetor: ");
    for(i = 0; i<vetor->nelements; i++)
        printf("%c " , *(char*)vetor->data[i]);

    printf("\n\nElement at index 1: %c \n\n", *(char*)vectorint_at(vetor, 0));

    vectorint_remove(vetor, &a);

    printf("Vetor: ");
    for(i = 0; i<vetor->nelements; i++)
        printf("%c ", *(char*)vetor->data[i]);

    printf("\n\n");

    check = vectorint_belongs(vetor, &a);
    if(check == 0)
        printf("O elemento %c nao pertece ao vetor\n\n", a);
    else
        printf("O elemento %c pertence ao vetor\n\n", a);

    check = vectorint_belongs(vetor, &c);
    if(check == 0)
        printf("O elemento %c nao pertece ao vetor\n\n", c);
    else
        printf("O elemento %c pertence ao vetor\n\n", c);
    
    printf("A quantidade de elementos no vetor é %d\n\n", vectorint_size(vetor));

    vectorint_free(vetor);
    printf("\n\n");

    return 0;
}
