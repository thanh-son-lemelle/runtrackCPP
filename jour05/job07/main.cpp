#include "contact.hpp"
#include <iostream>

int main() {
    // Instanciation de plusieurs objets Contact avec des données différentes
    Contact contact1("Alice", 12345);
    Contact contact2("Bob", 67890);

    // Copie de chaque objet Contact et modification du numéro de chaque copie
    Contact copieContact1 = contact1;
    copieContact1.modifierNumero(11111);

    Contact copieContact2 = contact2;
    copieContact2.modifierNumero(99999);

    // Affichage des informations de chaque objet
    std::cout << "Contact 1:" << std::endl;
    contact1.afficherInfos();
    std::cout << std::endl;

    std::cout << "Copie de Contact 1:" << std::endl;
    copieContact1.afficherInfos();
    std::cout << std::endl;

    std::cout << "Contact 2:" << std::endl;
    contact2.afficherInfos();
    std::cout << std::endl;

    std::cout << "Copie de Contact 2:" << std::endl;
    copieContact2.afficherInfos();
    std::cout << std::endl;

    return 0;
}
