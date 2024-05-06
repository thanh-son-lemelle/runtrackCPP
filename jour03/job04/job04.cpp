#include <iostream>

int main() {
    char operation;
    double nombre1, nombre2, resultat;
    
    std::cout << "Choisissez une opération parmi '+', '-', '*', '/' : ";
    std::cin >> operation;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    switch (operation) {
        case '+':
            resultat = nombre1 + nombre2;
            std::cout << "Le résultat de l'addition est : " << resultat << std::endl;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            std::cout << "Le résultat de la soustraction est : " << resultat << std::endl;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            std::cout << "Le résultat de la multiplication est : " << resultat << std::endl;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
                std::cout << "Le résultat de la division est : " << resultat << std::endl;
            } else {
                std::cout << "Erreur : division par zéro !" << std::endl;
            }
            break;
        default:
            std::cout << "Opération non valide." << std::endl;
    }

    return 0;
}