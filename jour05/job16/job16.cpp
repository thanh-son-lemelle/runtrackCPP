#include <iostream>

int trouverMax(int tableau[], int taille) {

    if (taille == 0) {
        std::cerr << "Erreur : Le tableau est vide." << std::endl;
        return -1;
    }

    int max = tableau[0];

    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    int tableau[] = {3, 7, 2, 9, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int max = trouverMax(tableau, taille);

    if (max != -1) {
        std::cout << "La valeur maximale dans le tableau est : " << max << std::endl;
    }

    return 0;
}
