#include <stdio.h>

#define TAM 10

void print (int* vet, int tam) {

    for (int i = 0; i < tam; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\n");
}

void insercaoDireta (int* vet, int tam) {

    int i, j;

    if (tam <= 1)
        return;
    
    for (i = 1; i < tam; i++) {
        j = i - 1;

        while (i > 0 && vet[i] < vet[j]) {
            int aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i--;
            j--;
        }
    }
}

int main () {

    int vet[TAM] = {4,5,3,2,6,1,9,7,8,0};

    print(vet, TAM);

    insercaoDireta(vet, TAM);

    print(vet, TAM);

    return 0;
}