#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    const int min = 0;
    const int max = 100;
    const int chances = 5;

    int nombreMystere = rand() % (max - min + 1) + min;

    std::cout << "Bienvenue dans le jeu Nombre mystere !" << std::endl;
    std::cout << "Devinez le nombre mystere entre " << min << " et " << max << "." << std::endl;

    for (int i = 0; i < chances; ++i) {
        int tentative;
        std::cout << "Tentative " << i + 1 << " : ";
        std::cin >> tentative;

        if (tentative == nombreMystere) {
            std::cout << "Félicitations ! Vous avez devine le nombre mystere !" << std::endl;
            return 0;
        } else if (tentative < nombreMystere) {
            std::cout << "Trop petit." << std::endl;
        } else {
            std::cout << "Trop grand." << std::endl;
        }
    }

    std::cout << "Vous avez epuise toutes vos chances. Le nombre mystere etait : " << nombreMystere << std::endl;
    return 0;
}
