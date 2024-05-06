#include <stdio.h>

int main() {

    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    printf("Adresse de entier : %p, Valeur : %d\n", (void*)&entier, entier);
    printf("Adresse de flottant : %p, Valeur : %.2f\n", (void*)&flottant, flottant);
    printf("Adresse de reel : %p, Valeur : %.3lf\n", (void*)&reel, reel);
    printf("Adresse de caractere : %p, Valeur : %s\n", (void*)&caractere, caractere);

    return 0;
}