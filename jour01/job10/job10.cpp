#include <iostream>

int main() {
    double prixHT, nombreKilos, tauxTVA, prixTTC;

    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHT;
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;
    std::cout << "Entrez le taux de TVA (en pourcentage) : ";
    std::cin >> tauxTVA;

    prixTTC = prixHT * nombreKilos * (1 + tauxTVA / 100.0);

    std::cout << "Le prix TTC des carottes est de : " << prixTTC << " euros." << std::endl;

    return 0;
}