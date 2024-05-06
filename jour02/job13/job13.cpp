#include <iostream>

void fusionnerTableaux(const int tab1[], int taille1, const int tab2[], int taille2, int resultat[]) {
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) {
        if (tab1[i] < tab2[j]) {
            resultat[k++] = tab1[i++];
        } else {
            resultat[k++] = tab2[j++];
        }
    }

    while (i < taille1) {
        resultat[k++] = tab1[i++];
    }

    while (j < taille2) {
        resultat[k++] = tab2[j++];
    }
}

int main() {
    const int taille1 = 5;
    const int taille2 = 4;
    int tab1[taille1] = {1, 3, 5, 7, 9};
    int tab2[taille2] = {2, 4, 6, 8};
    int resultat[taille1 + taille2];

    fusionnerTableaux(tab1, taille1, tab2, taille2, resultat);


    std::cout << "Tableau fusionne en ordre croissant :" << std::endl;
    for (int i = 0; i < taille1 + taille2; ++i) {
        std::cout << resultat[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
