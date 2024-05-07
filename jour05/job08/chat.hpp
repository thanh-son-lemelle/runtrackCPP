// Classe Chat héritant de Animal
#ifndef CHAT_HPP
#define CHAT_HPP

#include "animal.hpp" // Inclusion du fichier d'en-tête de Animal

#include <iostream>

class Chat : public Animal {
public:
    // Implémentation de la méthode crier() pour un Chat
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Implémentation de la méthode manger() pour un Chat
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif