#include <iostream>
#include <cmath>

int nombreDeChiffres(int nombre) {
    int compteur = 0;
    while (nombre != 0) {
        nombre /= 10;
        ++compteur;
    }
    return compteur;
}

bool estNarcissique(int nombre) {
    int nombreOriginal = nombre;
    int somme = 0;
    int nombreChiffres = nombreDeChiffres(nombre);

    while (nombre != 0) {
        int chiffre = nombre % 10;
        somme += pow(chiffre, nombreChiffres);
        nombre /= 10;
    }

    return somme == nombreOriginal;
}

int main() {
    int nombre;

    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    if (estNarcissique(nombre)) {
        std::cout << nombre << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
