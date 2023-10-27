//Guilherme Carvalho Torres 11202021966
#include <stdio.h>

#define MAX_CONJ 100

typedef struct {
    int vetor[MAX_CONJ];
    int len;
} Conjunto;


void le_vetor(int vet[], int len){
    int i; 

    printf("Digite os elementos: \n");
    for(i=0; i<len; i++)
        scanf("%d", &vet[i]);
}


void print_vetor(Conjunto X){
    int i;

    for(i=0; i<X.len; i++)
        printf("%d ", X.vetor[i]);

}


Conjunto conjunto(int vet[MAX_CONJ], int len){
    int i, j, is_equal;

    Conjunto conjunto;

    is_equal = 0;
    conjunto.len = 0;

    for(i=0; i<len; i++){
        is_equal = 0;
        
        for(j=0; j<conjunto.len; j++)
            if(conjunto.vetor[j] == vet[i]){
                is_equal = 1;
                break;
            }

        if(is_equal == 0){
            conjunto.vetor[i] = vet[i];
            conjunto.len += 1;
        }
    }

    return conjunto;
}


Conjunto conjunto_uniao(Conjunto A, Conjunto B){
    int i, j, len, is_equal;

    Conjunto conjunto_unido;

    len = 0;
    is_equal = 0;

    for(i=0; i<A.len; i++){
        conjunto_unido.vetor[i] = A.vetor[i];
        len += 1;
    }
    
    for(i=0; i<B.len; i++){
        for(j=0; j<conjunto_unido.len; j++)
            if(B.vetor[i] == conjunto_unido.vetor[j]){
                is_equal = 1;
                break;
            }

        if(is_equal == 0){
            conjunto_unido.vetor[len] = B.vetor[i];
            len += 1;
        }
        is_equal = 0;
    }
    conjunto_unido.len = len;

    return conjunto_unido;
}


int conjunto_pertence(int a, Conjunto A){
    int i;

    for(i=0; i<A.len; i++)
        if(A.vetor[i] == a)
            return 0;
    
    return 1;
}


int main(){
    int i, a, len_a, len_b, check;
    int vet_a[MAX_CONJ], vet_b[MAX_CONJ];


    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &len_a);

    le_vetor(vet_a, len_a);

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &len_b); 

    le_vetor(vet_b, len_b);
    
    Conjunto A = conjunto(vet_a, len_a);
    Conjunto B = conjunto(vet_b, len_b);

    printf("Conj a: ");
    print_vetor(A);
   
    printf("\nConj b: ");
    print_vetor(B);

    Conjunto AUB = conjunto_uniao(A, B);

    printf("\nConj aub: ");
    print_vetor(AUB);

    printf("\nDigite um valor para verificar se pertence ao conjunto A: ");
    scanf("%d", &a);

    check = conjunto_pertence(a, A);

    if(check == 0)
        printf("%d pertence ao conjunto A", a);
    else
        printf("%d não pertence ao conjunto A", a);
    
    return 0;
}


