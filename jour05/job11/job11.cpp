#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char * const fruit[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};
    
    printf("Contenu du tableau fruit :\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, fruit[i]);
    }

    int taille;
    printf("Combien de fruits préférés avez-vous ? : ");
    scanf("%d", &taille);

    char **favoris = (char **)malloc(taille * sizeof(char *));

    if (favoris == NULL) {
        printf("Erreur : Impossible d'allouer de la mémoire.\n");
        return 1;
    }

    printf("Entrez vos %d fruits préférés :\n", taille);
    for (int i = 0; i < taille; ++i) {
        favoris[i] = (char *)malloc(50 * sizeof(char));
        printf("Fruit %d : ", i + 1);
        scanf("%s", favoris[i]);
    }

    printf("Contenu du tableau favoris :\n");
    for (int i = 0; i < taille; ++i) {
        printf("%d. %s\n", i + 1, favoris[i]);
    }

    for (int i = 0; i < taille; ++i) {
        free(favoris[i]);
    }
    free(favoris);

    return 0;
}
