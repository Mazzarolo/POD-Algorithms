#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void headSortAux (int* arv, int tam, int pai) {    
    int esq = pai * 2 + 1;
    int dir = pai * 2 + 2;
    int aux;

    if (esq < tam && (dir >= tam || arv[esq] > arv[dir]) && arv[esq] > arv[pai]) {
        aux = arv[pai];
        arv[pai] = arv[esq];
        arv[esq] = aux;

        headSortAux (arv, tam, esq);
    } else if (dir < tam && arv[dir] > arv[pai]) {
        aux = arv[pai];
        arv[pai] = arv[dir];
        arv[dir] = aux;

        headSortAux (arv, tam, dir);
    }
}

void headSort (int* arv, int tam) {

    int max = tam;

    for (int j = tam / 2 - 1; j >= 0; j--)
        headSortAux (arv, tam, j);

    for (int i = 0; i < max; i++) {
        tam--;
        int aux = arv[tam];
        arv[tam] = arv[0];
        arv[0] = aux;
        headSortAux (arv, tam, 0);
    }
}

int main () {
    
    int arv[TAM];

    srand(time(NULL));
 
    for (int i = 0; i < TAM; i++) {
        arv[i] = rand() % TAM + 1;
    }
    
    for (int i = 0; i < TAM; i++) {
        printf ("%d, ", arv[i]);
    }

    printf ("\n");

    headSort (arv, TAM);

    for (int i = 0; i < TAM; i++) {
        printf ("%d, ", arv[i]);
    }

    printf ("\n");

    return 0;
}