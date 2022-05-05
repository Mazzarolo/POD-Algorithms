#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void selectionSort (int* vet, int tam) {

    for (int i = 0; i < tam; i++) {
        int menor = vet[i], menorIdx = i;
        
        for (int j = i; j < tam; j++) { 
            if (vet[j] < menor) {
                menor = vet[j];
                menorIdx = j;
            }
        }

        vet[menorIdx] = vet[i];
        vet[i] = menor;
    }
}

int main () {
    
    int vet[TAM];

    srand(time(NULL));
 
    for (int i = 0; i < TAM; i++) {
        vet[i] = rand() % 10 + 1;
    }
    
    for (int i = 0; i < TAM; i++) {
        printf ("%d, ", vet[i]);
    }

    printf ("\n");

    selectionSort (vet, TAM);

    for (int i = 0; i < TAM; i++) {
        printf ("%d, ", vet[i]);
    }

    printf ("\n");

    return 0;
}