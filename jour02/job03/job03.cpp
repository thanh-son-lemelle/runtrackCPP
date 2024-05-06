#include <iostream>
#include <cstring>

int comparerChaines(const char* chaine1, const char* chaine2) {

    if (std::strcmp(chaine1, chaine2) == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    const char* chaine1 = "Bonjour";
    const char* chaine2 = "Bonjour";
    
    int resultat = comparerChaines(chaine1, chaine2);
    
    if (resultat == 0) {
        std::cout << "Les chaines sont egales." << std::endl;
    } else {
        std::cout << "Les chaines sont differentes." << std::endl;
    }

    return 0;
}
