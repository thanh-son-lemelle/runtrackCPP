
#include "joueur.hpp"
int main() {

    Joueur joueur;

    joueur.afficherPosition();

    joueur.deplacer(1, 2);
    joueur.afficherPosition();

    joueur.deplacer(-3, 0);
    joueur.afficherPosition();

    joueur.deplacer(0, -1);
    joueur.afficherPosition();

    return 0;
}