#include <iostream>

int main() {
    double note;

    std::cout << "Entrez la note (entre 0 et 20) : ";
    std::cin >> note;

    if (note >= 0 && note <= 20) {

        if (note > 10) {
            std::cout << "Validé" << std::endl;
        } else {
            std::cout << "Non validé" << std::endl;
        }
    } else {
        std::cout << "La note saisie n'est pas valide. La note doit être comprise entre 0 et 20." << std::endl;
    }

    return 0;
}