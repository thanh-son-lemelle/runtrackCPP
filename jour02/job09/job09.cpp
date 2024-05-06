#include <iostream>
#include <string>

bool estIncluse(const std::string& chaine1, const std::string& chaine2) {
    
    return chaine2.find(chaine1) != std::string::npos;
}

int main() {
   
    std::string chaine1, chaine2;

    std::cout << "Entrez la premiere chaine : ";
    std::getline(std::cin, chaine1);
    std::cout << "Entrez la deuxieme chaine : ";
    std::getline(std::cin, chaine2);


    if (estIncluse(chaine1, chaine2)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}
