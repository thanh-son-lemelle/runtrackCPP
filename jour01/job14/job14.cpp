#include <iostream>

int main() {
    int nombre(0);

    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    std::string numString = std::to_string(nombre);
    std::string resultat{""};

    for (int i = static_cast<int>(numString.length()) - 1; i >= 0; i--)
    {
        resultat += numString[i];
    }

    std::cout << "Le resultat est " << resultat << std::endl;
    return 0;
}