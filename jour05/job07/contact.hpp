#include <iostream>
#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur prenant un string pour le nom et un int pour le numéro de téléphone
    Contact(const std::string& nom, int numero) : nom(nom), numero(numero) {}

    // Constructeur de copie
    Contact(const Contact& autre) : nom(autre.nom), numero(autre.numero) {}

    // Méthode pour modifier le numéro de téléphone
    void modifierNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }

    // Méthode pour afficher les informations du contact
    void afficherInfos() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Numero: " << numero << std::endl;
    }
};