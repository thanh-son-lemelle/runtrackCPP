#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Note {
    char nom[50];
    char prenom[50];
    float note;
};

void ajouterNote(struct Note **liste, int *taille) {

    *liste = (struct Note*)realloc(*liste, (*taille + 1) * sizeof(struct Note));

    if (*liste == NULL) {
        printf("Erreur : Impossible d'allouer de la mémoire.\n");
        return;
    }

    printf("Entrez le nom de l'etudiant : ");
    scanf("%s", (*liste)[*taille].nom);
    printf("Entrez le prenom de l'etudiant : ");
    scanf("%s", (*liste)[*taille].prenom);
    printf("Entrez la note de l'etudiant : ");
    scanf("%f", &((*liste)[*taille].note));

    (*taille)++;
}

void afficherListe(struct Note *liste, int taille) {
    printf("Liste des notes :\n");
    for (int i = 0; i < taille; ++i) {
        printf("Nom : %s, Prenom : %s, Note : %.2f\n", liste[i].nom, liste[i].prenom, liste[i].note);
    }
}

void supprimerNote(struct Note **liste, int *taille) {
    if (*taille == 0) {
        printf("La liste des notes est vide.\n");
        return;
    }

    char nomRecherche[50];
    char prenomRecherche[50];
    int indice = -1;

    printf("Entrez le nom de l'etudiant dont vous voulez supprimer la note : ");
    scanf("%s", nomRecherche);
    printf("Entrez le prenom de l'etudiant : ");
    scanf("%s", prenomRecherche);

    for (int i = 0; i < *taille; ++i) {
        if (strcmp((*liste)[i].nom, nomRecherche) == 0 && strcmp((*liste)[i].prenom, prenomRecherche) == 0) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        for (int i = indice; i < (*taille - 1); ++i) {
            (*liste)[i] = (*liste)[i + 1];
        }
        (*taille)--;
        *liste = (struct Note*)realloc(*liste, (*taille) * sizeof(struct Note));
        printf("La note de l'etudiant a ete supprimee avec succes.\n");
    } else {
        printf("Note non trouvee.\n");
    }
}

float calculerMoyenne(struct Note *liste, int taille) {
    if (taille == 0) {
        printf("La liste des notes est vide.\n");
        return 0;
    }

    float somme = 0;
    for (int i = 0; i < taille; ++i) {
        somme += liste[i].note;
    }
    return somme / taille;
}

int main() {
    struct Note *liste = NULL;
    int taille = 0;
    int choix;

    do {
        printf("\nMenu :\n");
        printf("1. Ajouter une note\n");
        printf("2. Afficher la liste des notes\n");
        printf("3. Supprimer une note\n");
        printf("4. Afficher la moyenne des notes\n");
        printf("5. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterNote(&liste, &taille);
                break;
            case 2:
                afficherListe(liste, taille);
                break;
            case 3:
                supprimerNote(&liste, &taille);
                break;
            case 4:
                printf("La moyenne des notes est : %.2f\n", calculerMoyenne(liste, taille));
                break;
            case 5:
                printf("Programme termine.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
        }
    } while (choix != 5);

    free(liste);

    return 0;
}
