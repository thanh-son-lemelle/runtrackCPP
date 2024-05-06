#include <iostream>

int main() {
    const char* tableau[4] = {"2019", "La Plateforme", "3.14", "Étudiants"};
    std::cout << "Adresses et valeurs des elements du tableau :" << std::endl;
    for (size_t i = 0; i < 4; ++i) {
        std::cout << "Adresse de l'element " << i << " : " << (void*)&tableau[i] << ", Valeur : " << tableau[i] << std::endl;
    }
    return 0;
}