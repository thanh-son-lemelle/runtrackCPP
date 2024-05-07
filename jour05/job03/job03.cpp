#include "joueur.hpp"
int main() {

    Joueur joueur1;

    joueur1.afficherPosition();

    joueur1.deplacer(1, 2);
    joueur1.afficherPosition();

    joueur1.deplacer(-3, 0);
    joueur1.afficherPosition();

    joueur1.deplacer(0, -1);
    joueur1.afficherPosition();

    Joueur joueur2(3, 4);
    joueur2.afficherPosition();

    Joueur joueur3(5, 6, "Alicia");
    joueur3.afficherPosition();

    return 0;
}