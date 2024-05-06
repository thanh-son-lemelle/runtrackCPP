#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;

    printf("Entrez le nombre d'entiers à définir : ");
    scanf("%d", &taille);

    int *tableau = (int*)malloc(taille * sizeof(int));

    if (tableau == NULL) {
        printf("Erreur : Impossible d'allouer de la mémoire.\n");
        return 1; 
    }

    printf("Entrez %d entiers :\n", taille);
    for (int i = 0; i < taille; ++i) {
        printf("Entier %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Contenu du tableau :\n");
    for (int i = 0; i < taille; ++i) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);

    return 0;
}
