#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int indiceMax = 0;

    // Demander à l'utilisateur de saisir 10 entiers
    std::cout << "Veuillez entrer 10 entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> T[i];
    }

    // Trouver l'indice du plus grand élément dans le tableau
    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    // Afficher l'indice du plus grand élément
    std::cout << "L'indice du plus grand element est : " << indiceMax << std::endl;

    return 0;
}
