// Personne.hpp

#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    Personne(const std::string& nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

    void afficherInfos() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Points de vie: " << pointsDeVie << std::endl;
        std::cout << "Defense: " << defense << std::endl;
    }

    void modifierNom(const std::string& nouveauNom) {
        nom = nouveauNom;
    }

    void modifierPointsDeVie(int nouveauxPointsDeVie) {
        pointsDeVie = nouveauxPointsDeVie;
    }

    void modifierDefense(float nouvelleDefense) {
        defense = nouvelleDefense;
    }
};

#endif
