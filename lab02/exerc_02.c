// Guilherme Carvalho Torres 11202021966
# include <stdio.h>

void le_vetor(int entrada[], int n){
    int i;

    printf("Digite os elementos do vetor:\n");
    for(i=0; i<n; i++)
        scanf("%d", &entrada[i]);
}


int main(){
    int vetor[100];
    int i, j, aux, len;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &len);

    le_vetor(vetor, len);

     for(i=0; i<len; i++)
        for(j=0; j<len; j++)
            if(vetor[j] < vetor[i]){
                aux = vetor[i];
                vetor[i]= vetor[j];
                vetor[j] = aux;
            }

    printf("Vetor ordenado: ");
    for(i=0; i<len; i++)
        printf("%d ", vetor[i]);

    return 0;
}