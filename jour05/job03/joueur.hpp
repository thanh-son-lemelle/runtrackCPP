// joueur.hpp

#include <iostream>
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    // Default constructor initializing coordinates to (0, 0)
    Joueur() : x(0), y(0), nom(""){}

    // Constructor taking x, y as parameters
    Joueur(int startX, int startY) : x(startX), y(startY), nom(""){}

    // Constructor taking x, y, and nom as parameters
    Joueur(int startX, int startY, const std::string& nomJoueur) : x(startX), y(startY), nom(nomJoueur) {}
    
    void setPosition(int newX, int newY) {
        x = newX;
        y = newY;
    }

    void afficherPosition() {
        std::cout << "Position du joueur " << nom << " : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }

    ~Joueur() {
        std::cout << "Destruction du joueur " << nom << std::endl;
    }
};

