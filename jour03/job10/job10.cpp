#include <iostream>
#include <cmath> 

int main() {
    double nombre;

    while (true) {

        std::cout << "Entrez un nombre (0 pour quitter) : ";
        std::cin >> nombre;

        if (nombre == 0) {
            std::cout << "Fin du programme." << std::endl;
            break; 
        }

        if (nombre < 0) {
            std::cout << "Veuillez saisir un nombre positif." << std::endl;
            continue;
        }

        double racine_carree = sqrt(nombre);
        std::cout << "La racine carrée de " << nombre << " est : " << racine_carree << std::endl;
    }

    return 0;
}