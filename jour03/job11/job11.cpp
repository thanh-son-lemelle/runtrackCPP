#include <iostream>


unsigned long long calculerFactorielle(int n) {

    if (n <= 1) {
        return 1;
    }
    else {
        return n * calculerFactorielle(n - 1);
    }
}

int main() {
    int nombre;

    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    if (nombre < 0) {
        std::cout << "La factorielle n'est pas définie pour les nombres négatifs." << std::endl;
    }
    else {
        unsigned long long resultat = calculerFactorielle(nombre);
        std::cout << nombre << "! = " << resultat << std::endl;
    }

    return 0;
}
