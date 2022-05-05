#include <stdio.h>

#define TAM 10

int particao (int* vet, int ini, int fim) {
    int pivot = vet[ini];
    int i = ini, j = fim;

    do {
        while(vet[i] < pivot)
            i++;
        while (vet[j] > pivot)
            j--;
        int aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    } while (i < j);

    return i;
}

void quickSort (int* vet, int ini, int fim) {
    if (ini >= fim) return;

    int pos =  particao (vet, ini, fim);

    quickSort (vet, ini, pos - 1);

    quickSort (vet, pos + 1, fim);

}

int main () {

    int vet[TAM] = {4, 3, 6, 1, 2, 5, 7, 9, 8, 0};

    quickSort (vet, 0, TAM - 1);

    for (int i = 0; i < TAM; i++)
    {
        printf ("%d, ", vet[i]);
    }
    

    return 0;
}