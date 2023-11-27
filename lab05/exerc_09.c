#include <stdio.h>
#include <stdlib.h>


void arranjos(int array[], int inicio, int fim, int k, int fixo[], int len_fixo){
    int i;
    
    if(len_fixo == k){
        for(i=0; i<k; i++)
            printf("%d ", fixo[i]);

        printf("\n");
        return;
    }

    for(i=inicio; i<fim; i++){
        fixo[len_fixo] = array[i];
        arranjos(array, i+1, fim, k, fixo, len_fixo+1);
    }
}



int main(){
    int i, k, n;
    int* array;
    int* fixo;

    printf("Insira o numero de elementos: ");
    scanf("%d", &n);

    printf("Insira o tamanho dos agrupamentos: ");
    scanf("%d", &k);

    array = malloc(n * sizeof(int));
    fixo = malloc(k * sizeof(int));

    printf("insira os elementos: ");
    for(i=0; i<n; i++)
        scanf("%d", &array[i]);
    
    arranjos(array, 0, n, k, fixo, 0);

    free(array);
    free(fixo);
    
    return 0;
}