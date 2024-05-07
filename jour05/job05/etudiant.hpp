#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    // Constructeur avec une liste d'initialisation pour initialiser les propriétés de la classe
    Etudiant(const std::string& nom, const std::string& prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule) {}

    // Définition des méthodes pour accéder aux propriétés de l'étudiant si nécessaire
};

#endif
