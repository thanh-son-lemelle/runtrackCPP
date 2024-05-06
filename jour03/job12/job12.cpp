#include <iostream>

double sommeHarmonique(int n) {
    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    return somme;
}

int main() {
    int n;

    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "n doit être un entier positif." << std::endl;
    } else {
        double resultat = sommeHarmonique(n);
        std::cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << resultat << std::endl;
    }

    return 0;
}
