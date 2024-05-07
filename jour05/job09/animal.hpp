#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
private:
    static int totalAnimaux;

public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() {
        totalAnimaux--;
    }

    // Méthode virtuelle pure crier() qui représente le cri de l'animal
    virtual void crier() const = 0;

    // Méthode virtuelle pure manger() qui reprend l'action de manger
    virtual void manger() const = 0;

    // Méthode statique pour obtenir le nombre total d'animaux
    static int getTotalAnimaux() {
        return totalAnimaux;
    }
};
int Animal::totalAnimaux = 0;
#endif
