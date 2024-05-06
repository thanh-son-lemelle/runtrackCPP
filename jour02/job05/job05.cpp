#include <iostream>
#include <string>
#include <regex>

bool verifierFormatHeure(const std::string& heure) {
    // Expression régulière pour vérifier le format "XXhXX"
    std::regex pattern("^\\d{2}h\\d{2}$");

    // Vérification du format à l'aide de std::regex_match
    return std::regex_match(heure, pattern);
}

int main() {
    std::string heure;

    // Demander à l'utilisateur de saisir l'heure
    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> heure;

    // Vérifier le format de l'heure et afficher le résultat
    if (verifierFormatHeure(heure)) {
        std::cout << "L'heure est au bon format." << std::endl;
    } else {
        std::cout << "Format d'heure invalide." << std::endl;
    }

    return 0;
}