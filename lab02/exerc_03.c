#include <stdio.h>

void le_vetor(int entrada[], int n){
    int i;

    printf("Digite os elementos do vetor:\n");
    for(i=0; i<n; i++)
        scanf("%d", &entrada[i]);
}


void ordena(int valores[], int n){
    int i, j, aux;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(valores[j] > valores[i]){
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
}



int main(){
    int vetor[100];
    int i, len;

    printf("digite o tamanho do vetor\n");
    scanf("%d", &len);

    le_vetor(vetor, len);
    ordena(vetor, len);

    printf("Vetor ordenado: ");
    for(i=0; i<len; i++)
        printf("%d ", vetor[i]);

    return 0;
}