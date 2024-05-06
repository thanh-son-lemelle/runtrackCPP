#include <iostream>

void fibonacci(int limite) {
    int terme1 = 0, terme2 = 1, termeSuivant;

    std::cout << "Suite de Fibonacci jusqu'a la limite " << limite << " : ";
    std::cout << terme1 << " " << terme2 << " ";

    while (terme1 + terme2 <= limite) {
        termeSuivant = terme1 + terme2;
        std::cout << termeSuivant << " ";
        terme1 = terme2;
        terme2 = termeSuivant;
    }
    std::cout << std::endl;
}

int main() {
    int limite;

    std::cout << "Entrez la limite pour la suite de Fibonacci : ";
    std::cin >> limite;

    fibonacci(limite);

    return 0;
}