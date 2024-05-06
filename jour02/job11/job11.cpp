#include <iostream>

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) { 
            somme += tableau[i];
        }
    }
    return somme;
}

int main() {
    const int taille = 5;
    int tableau[taille];

    std::cout << "Entrez " << taille << " entiers pour le tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    int sommePairs = sommeElementsPairs(tableau, taille);

    std::cout << "La somme des elements pairs du tableau est : " << sommePairs << std::endl;

    return 0;
}
