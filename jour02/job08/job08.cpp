#include <iostream>
#include <cstring>

int main() {
    char* tab;

    std::cout << "Entrez une chaine de caracteres : ";
    std::string input;
    std::getline(std::cin, input);

    tab = new char[input.length() + 1];
    std::strcpy(tab, input.c_str());

    std::cout << "La chaine que vous avez saisie est : " << tab << std::endl;

    std::cout << "Les lettres de la chaine dans le tableau tab sont : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    delete[] tab;

    return 0;
}