#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::cout << "Entrez une chaine de caracteres : ";
    std::string string;
    std::getline(std::cin, string);
    std::string string2 = "Bonjour";
    std::sort(string.begin(), string.end());
    std::sort(string2.begin(), string2.end());

    std::cout << "Chaine 1 triee : " << string << std::endl;
    std::cout << "Chaine 2 triee : " << string2 << std::endl;

    return 0;
}
