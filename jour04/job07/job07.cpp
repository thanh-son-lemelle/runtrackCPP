#include <stdio.h>

int main() {
   
    int tableau[] = {10, 20, 30, 40, 50};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Adresse et valeur de chaque element du tableau :\n");
    for (int i = 0; i < taille; ++i) {
        printf("Adresse de tableau[%d] : %p, Valeur : %d\n", i, (void*)&tableau[i], tableau[i]);
    }

    return 0;
}
