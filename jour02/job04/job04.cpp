#include <iostream>
#include <cstring>

int main() {
    const char* chaine = "Vive la plateforme !";

    int taille = std::strlen(chaine);
    std::cout << "La taille est " << taille << std::endl;

    return 0;
}