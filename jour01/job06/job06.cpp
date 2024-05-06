#include <iostream>

int main() {
    int entier;


    std::cout << "Entrez un entier : ";
    std::cin >> entier;


    std::cout << "Table de multiplication de " << entier << " :\n";
    for (int i = 0; i <= 10; ++i) {
        std::cout << entier << " x " << i << " = " << entier * i << std::endl;
    }

    return 0;
}