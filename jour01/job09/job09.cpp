#include <iostream>

int main() {
    int entier1, entier2, entier3;

    std::cout << "Entrez le premier entier : ";
    std::cin >> entier1;
    std::cout << "Entrez le deuxième entier : ";
    std::cin >> entier2;
    std::cout << "Entrez le troisième entier : ";
    std::cin >> entier3;

    int plusGrand = entier1;

    if (entier2 > plusGrand) {
        plusGrand = entier2;
    }

    if (entier3 > plusGrand) {
        plusGrand = entier3;
    }

    // Afficher le plus grand entier
    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}