// joueur.hpp

#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    Joueur(int startX = 0, int startY = 0) : x(startX), y(startY) {}

    void setPosition(int newX, int newY) {
        x = newX;
        y = newY;
    }

    void afficherPosition() {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};

