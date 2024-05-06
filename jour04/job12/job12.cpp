#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Staff {
    char nom[50];
    char prenom[50];
};

struct Etudiant {
    char nom[50];
    char prenom[50];
};

int main() {
    struct Staff alicia = {"Cordial", "Alicia"};
    struct Staff pierre = {"Malardier", "Pierre"};

    printf("Prénoms du staff :\n");
    printf("%s\n", alicia.prenom);
    printf("%s\n", pierre.prenom);

    int nbEtudiants;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &nbEtudiants);

    struct Etudiant *etudiants = (struct Etudiant *)malloc(nbEtudiants * sizeof(struct Etudiant));

    if (etudiants == NULL) {
        printf("Erreur : Impossible d'allouer de la mémoire.\n");
        return 1;
    }

    for (int i = 0; i < nbEtudiants; ++i) {
        printf("Entrez le nom de l'etudiant %d : ", i + 1);
        scanf("%s", etudiants[i].nom);
        printf("Entrez le prenom de l'etudiant %d : ", i + 1);
        scanf("%s", etudiants[i].prenom);
    }

    printf("Prénoms des etudiants :\n");
    for (int i = 0; i < nbEtudiants; ++i) {
        printf("%s\n", etudiants[i].prenom);
    }

    free(etudiants);

    return 0;
}
