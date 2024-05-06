#include <iostream>

int main() {
    double nombre1, nombre2, somme;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    somme = nombre1 + nombre2;

    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;

    return 0;
}