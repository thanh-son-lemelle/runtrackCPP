// Classe Chien héritant de Animal
#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "animal.hpp" // Inclusion du fichier d'en-tête de Animal

#include <iostream>

class Chien : public Animal {
public:
    // Implémentation de la méthode crier() pour un Chien
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    // Implémentation de la méthode manger() pour un Chien
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif