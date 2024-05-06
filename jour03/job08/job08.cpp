#include <iostream>

int main() {
    int a, b;

    std::cout << "Entrez la borne inferieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne superieure b : ";
    std::cin >> b;

    std::cout << "Les entiers de " << a << " a " << b << " sont : ";
    int i = a;
    while (i <= b) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}