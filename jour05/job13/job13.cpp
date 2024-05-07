#include <iostream>
#include <vector>
#include <string>

struct Vol {
    std::string destination;
    int tempsDeVol;
};

int main() {

    std::vector<Vol*> vols;

    char continuer;
    do {
        Vol *nouveauVol = new Vol;

        std::cout << "Entrez la destination : ";
        std::cin >> nouveauVol->destination;
        std::cout << "Entrez le temps de vol depuis Marseille : ";
        std::cin >> nouveauVol->tempsDeVol;

        vols.push_back(nouveauVol);

        std::cout << "Voulez-vous ajouter un autre vol ? (O/N) : ";
        std::cin >> continuer;
    } while (continuer == 'O' || continuer == 'o');

    std::cout << "\nDonnees de chaque vol :\n";
    for (size_t i = 0; i < vols.size(); ++i) {
        std::cout << "Vol " << i + 1 << " : Destination - " << vols[i]->destination << ", Temps de vol - " << vols[i]->tempsDeVol << " heures" << std::endl;
    }
    if (!vols.empty()) {
        vols[0]->tempsDeVol += 1; 
        std::cout << "\nDonnees apres modification du premier vol :\n";
        std::cout << "Vol 1 : Destination - " << vols[0]->destination << ", Temps de vol - " << vols[0]->tempsDeVol << " heures" << std::endl;
    }

    for (size_t i = 0; i < vols.size(); ++i) {
        delete vols[i];
    }

    return 0;
}