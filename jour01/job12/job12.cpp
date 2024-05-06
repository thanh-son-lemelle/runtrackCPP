#include <iostream>

int main() {
    int entier, somme = 0;

    std::cout << "Entrez cinq entiers : ";

    for (int i = 0; i < 5; ++i) {
        std::cin >> entier;
        somme += entier;
    }

    double moyenne = static_cast<double>(somme) / 5;

    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}