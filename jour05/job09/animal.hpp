#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
    // Méthode virtuelle pure crier() qui représente le cri de l'animal
    virtual void crier() const = 0;

    // Méthode virtuelle pure manger() qui reprend l'action de manger
    virtual void manger() const = 0;

    // Destructeur virtuel
    virtual ~Animal() {}
};

#endif