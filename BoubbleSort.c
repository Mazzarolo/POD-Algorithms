#include <stdio.h>
#include <time.h>

#define TAM 10

int main () {

    int aux = TAM;
    int vet[TAM] = {4,3,6,8,7,2,9,1,6,1};

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 1; j < aux; j++)
        {
            if (vet[j-1] > vet[j])
            {
                int trade = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = trade;
            }   
        }
        aux--;
    }

    for (int i = 0; i < TAM; i++)
    {
        printf ("%d, ", vet[i]);
    }
    

    return 0;
}