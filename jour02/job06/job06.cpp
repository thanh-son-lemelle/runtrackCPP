#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int nbSupOuEgalA5 = 0;

    // Demander à l'utilisateur de saisir 10 entiers
    std::cout << "Veuillez entrer 10 entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> T[i];
    }

    // Compter le nombre d'entiers supérieurs ou égaux à 5
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            nbSupOuEgalA5++;
        }
    }

    // Afficher le résultat
    std::cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << nbSupOuEgalA5 << std::endl;

    return 0;
}