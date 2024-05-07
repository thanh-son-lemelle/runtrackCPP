#include "chien.hpp"
#include "chat.hpp"

#include <iostream>
#include <string>

int main() {
    // Instanciation d'un Chien et appel des méthodes crier() et manger()
    Chien chien;
    std::cout << "Chien:" << std::endl;
    chien.crier();
    chien.manger();
    std::cout << std::endl;

    // Instanciation d'un Chat et appel des méthodes crier() et manger()
    Chat chat;
    std::cout << "Chat:" << std::endl;
    chat.crier();
    chat.manger("des croquettes");
    std::cout << std::endl;

    return 0;
}
