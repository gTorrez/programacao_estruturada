// Guilherme Carvalho Torres 11202021966
#include <stdio.h>

void le_vetor(int entrada[], int n){
    int i;

    printf("Digite os elementos do vetor:\n");
    for(i=0; i<n; i++)
        scanf("%d", &entrada[i]);
}

int maximo(int v[], int n){
    int max, i;

    for(i=0; i<n; i++)
        if(v[i] > max)
            max = v[i];
    
    printf("Maximo: %d\n", max);
    return max;
}

int minimo(int v[], int n){
    int min, i;

    for(i=0; i<n; i++)
        if(v[i] < min)
            min = v[i];

    printf("Minimo: %d\n", min);
    return min;
}

double media(int v[], int n){
    float media_vet, soma; 
    int i;

    soma = 0;
    for(i=0; i<n; i++)
        soma += v[i];
    
    media_vet = soma/n;
    printf("Media: %.2f\n", media_vet);
    return media_vet;
}

int main(){
    int len;
    int vetor[100];

    printf("Digite o tamanho do vetor (ate 100)\n");
    scanf("%d", &len);

    le_vetor(vetor, len);
    maximo(vetor, len);
    minimo(vetor, len);
    media(vetor, len);

    return 0;
}


